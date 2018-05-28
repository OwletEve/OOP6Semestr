#pragma once
#include"iostream"
#include"conio.h"
using namespace std;

template<typename T>
class QuTemp
{
	T *arr;
int count;
int end = 0, start = 0, size = 0;

public:
	QuTemp(int count); 
	QuTemp(const QuTemp &other);  
	QuTemp (QuTemp &&other); 
	QuTemp&operator=(const QuTemp &other); 
	QuTemp&operator=(QuTemp &&other); 
	~QuTemp(); 
	int GetSize();
	void Push(T element); 
	T Pop(); 
	T Peek(); 
	bool Check(); 
	friend ostream& operator << (ostream&stream, const QuTemp<T>&a);
};

template<typename T>
QuTemp<T>::QuTemp(int count)
	:count(count)
{
	arr = new T[count]
}

template<typename T>
QuTemp<T>::~QuTemp()
{
	delete[] arr;
}

template<typename T>
QuTemp<T>::QuTemp(const QuTemp&other)
{
	arr = new T[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
 
template<typename T>
QuTemp<T>&QuTemp<T>::operator=(const QuTemp&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new T[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}

template<typename T>
QuTemp<T>&QuTemp<T>::operator=(QuTemp&&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}

template<typename T>
QuTemp<T>::QuTemp(QuTemp&&other)
{
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}

template<typename T>
int QuTemp<T>::GetSize()
{
	return this->size;
}

template<typename T>
void QuTemp<T>::Push(T element)
{
	if (size < count)
	{
		arr[end] = element;
		end = (end + 1) % count;
		size++;
	}
}

template<typename T>
QuTemp <T>::Pop()
{
	if (size > 0)
	{
		T element = arr[start];
		start = (start + 1) % count;
		size--;
		return element;
	}
	return 0;
}

template<typename T>
QuTemp <T>::Peek()
{
	return arr[start];
}

template<typename T>
bool QuTemp<T>::Check()
{
	return (size > 0);
}

template<typename T>
ostream& operator << (ostream&stream, const QuTemp<T>&a)
{
	QuTemp<T> b = a;
	stream << "=====\n";
	for (int i = 0; i <b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}
