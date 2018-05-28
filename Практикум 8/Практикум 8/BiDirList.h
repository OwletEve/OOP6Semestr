#pragma once
#include "Node.h"

template<typename T>
class BiDirList
{

	Node<T> *head;

	int size = 0;

public:

	BiDirList();
	BiDirList(const BiDirList &other); 
	BiDirList(BiDirList &&other);
	BiDirList &operator=(const BiDirList &other); 
	BiDirList &operator=(BiDirList &&other); 
	~BiDirList(); 
	int GetSize();
	Node<T> *Find(int number);
	void Push(T element, int number); 
	T Remove(int number); 
	T Peek(int number); 
	bool CheckL(); 
	friend ostream & operator << (ostream & stream, const BiDirList<T> &a); 
};

template<typename T>

BiDirList<T>::BiDirList()
	: head(NULL)
{
	head = new Node<T>;
	Node<T> *node = new Node<T>;
	head->next = node;
	head->prev = node;
	node->next = head;
	node->prev = head;
}

template<typename T>

BiDirList<T>::~BiDirList() 
{
	Node<T> *node = head;
	while (node->next != head)
	{
		node = node->next;
		delete node->prev;
	}
	delete head;
}

template<typename T>

BiDirList<T>::BiDirList(const BiDirList &other) 
{
	Node<T> oldOldNode = other.head;
	head = other.head;
	Node<T> newOldNode = head;
	size = other.size;
	while (oldNode->next != other.head)
	{
		Node<T> *newNewNode;
		newOldNode->next = newNewNode;
		newNewNode->prev = newOldist;
		newOldNode = newOldNode->next;
     	newOldNode->data = oldOldNode->data;
	}
	newOldNode->next = head;
	head->prev = newOldNode;
}

template<typename T>

BiDirList<T>::BiDirList(BiDirList &&other) 
{
	head = other.head;
	size = other.size;
	other.head = nullptr;
}

template<typename T>

BiDirList<T> &BiDirList<T>::operator=(const BiDirList &other) 
{
	if (this == &other)
	{
		return *this;
	}
	delete head;
	head = new Node<T>;
	Node<T> *node = head;
	while (node->next != head)
	{
		Node<T> *newNode = new Node<T>;
		Node<T> *oldNode = node->next;
		node->next = newNode;
		newNode->prev = node;
		newNode->data = oldNode->data;
	}
}

template<typename T>

BiDirList<T> &BiDirList<T>::operator=(BiDirList &&other) 
{
	if (this == &other)
	{
		return *this;
	}
	delete head;
	head = other.head;
	other.head = nullptr;
}

template<typename T>

int BiDirList<T>::GetSize()
{
	return this->size;
}

template<typename T>

Node<T> *BiDirList<T>::Find(int number)
{
	Node<T> *node = head->next;
	for (int i = 0; i < number; i++)
	{
		node = node->next;
	}
	return node;
}

template<typename T>

void BiDirList<T>::Push(T element, int number) 
{
	Node<T> *prevNode = this->Find(number);
	Node<T> *nextNode = prevNode->next;
	Node<T> *newNode = new Node<T>;
	newNode->data = element;
	prevNode->next = newNode;
	newNode->prev = prevNode;
	newNode->next = nextNode;
	nextNode->prev = newNode;
	size++;
}

template<typename T>

T BiDirList<T>::Remove(int number)
{
	if (size > 0)
	{
		Node<T> *oldNode = this->Find(number);
		Node<T> *nextNode = oldNode->next;
		Node<T> *prevNode = oldNode->prev;
		T element = oldNode->data;
		nextNode->prev = prevNode;
		prevNode->next = nextNode;
		delete oldNode;
		size--;
		return element;
	}
	return 0;
}

template<typename T>

T BiDirList<T>::Peek(int number) 
{
	Node<T> *node = this->Find(number);
	return node->data;
}

template<typename T>

bool BiDirList<T>::CheckL() 
{
	return (size > 0);
}

template<typename T>

ostream & operator << (ostream & stream, const BiDirList<T> &a)
{
	BiDirList<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.size; i++)
	{
		stream << "| " << b.Remove() << "\n";
	}
	stream << "=====\n";
	return stream;
}