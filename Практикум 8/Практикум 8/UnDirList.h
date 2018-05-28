#pragma once
#include "Node.h"

template<typename T>
class UnDirList

	{
		Node <T> *head;
		Node <T> *tail;
		int size = 0;

	public:

		UnDirList(); 
		UnDirList(const UnDirList &other); 
		UnDirList(UnDirList &&other); 
		UnDirList &operator=(const UnDirList &other); 
		UnDirList &operator=(UnDirList &&other);
		~UnDirList(); 
		int GetSize();
		Node<T> *Find(int number);
		void Push(T element, int number); 
		T Remove(int number);
		T Peek(int number);
		bool CheckL(); 
		friend ostream & operator << (ostream & stream, const UnDirList<T> &a); 
	};

	template<typename T>

	UnDirList<T>::UnDirList()

		: head(NULL)
	{
		head = new Node<T>;
		tail = new Node<T>;
		head->next = tail;
	}

	template<typename T>

	UnDirList<T>::~UnDirList() 
	{
		Node<T> *node = head;
		while (node->next != tail)
		{
			Node<T> *deleteNode = node;
			node = node->next;
			delete deleteNode;
		}
		delete node;
		delete tail;
	}

	template<typename T>

	UnDirList<T>::UnDirList(const UnDirList &other) 
	{
		Node<T> oldOldNode = other.head;
		head = other.head;
		tail = other.tail;
		size = other.size;
		Node<T> newOldNode = head;
		while (newOldNode->next != tail)
		{
			Node<T> *newNewNode;
			newOldNode->next = newNewNode;
			newOldNode = newOldNode->next;
			oldOldNode = oldOldNode->next;
			newOldNode->data = oldOldNode->data;
		}
		newOldNode->next = tail;
	}

	template<typename T>

	UnDirList<T>::UnDirList(UnDirList &&other) 
	{
		head = other.head;
		tail = other.tail;
		size = other.size;
		other.head = nullptr;
	}

	template<typename T>

	UnDirList<T> &UnDirList<T>::operator=(const UnDirList &other)
	{
		if (this == &other)
		{
			return *this;
		}
		delete head;
		delete tail;
		head = new Node<T>;
		tail = new Node<T>;
		Node<T> *node = head;
		while (node->next != tail)
		{
			Node<T> *newNode = new Node<T>;
			Node<T> *oldNode = node->next;
			node->next = newNode;
			newNode->data = oldNode->data;
		}
		node->next = tail;
	}

	template<typename T>

	UnDirList<T> &UnDirList<T>::operator=(UnDirList &&other) 
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

	int UnDirList<T>::GetSize()
	{
		return this->size;
	}

	template<typename T>

	Node<T> *UnDirList<T>::Find(int number)
	{
		Node<T> *node = head;
		for (int i = 0; i < number; i++)
		{
			node = node->next;
		}
		return node;
	}

	template<typename T>

	void UnDirList<T>::Push(T element, int number) 
	{
		Node<T> *prevNode = this->Find(number);
		Node<T> *nextNode = prevNode->next;
		Node<T> *newNode = new Node<T>;
		newNode->data = element;
		prevNode->next = newNode;
		newNode->next = nextNode;
		size++;
	}

	template<typename T>

	T UnDirList<T>::Remove(int number) 
	{
		if ((size > 0) && (number > 0) && (number <= size))
		{
			Node<T> *oldNode = this->Find(number);
			Node<T> *nextNode = oldNode->next;
			Node<T> *prevNode = this->Find(number - 1);
			T element = oldNode->data;
			prevNode->next = nextNode;
			delete oldNode;
			size--;
			return element;
		}
		return 0;
	}

	template<typename T>

	T UnDirList<T>::Peek(int number) 
	{
		Node<T> *node = this->Find(number);
		return node->data;
	}

	template<typename T>

	bool UnDirList<T>::CheckL() 
	{
		return (size > 0);
	}

	template<typename T>

	ostream & operator << (ostream & stream, const UnDirList<T> &a)
	{
		UnDirList<T> b = a;
		stream << "=====\n";
		for (int i = 0; i < b.size; i++)
		{
			stream << "| " << b.Remove() << "\n";
		}
		stream << "=====\n";
		return stream;
	}
	;
