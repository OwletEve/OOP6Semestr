#pragma once
#include"Stor.h"
#include"BiDirList.h"
template<typename T>

class QuBiDirList :public Stor<T>
{
	BiDirList<T> *Que;
	int count;

public:

	QuBiDirList(int count)
		: Que(), count(count) { }

	QuBiDirList(const QuBiDirList &other) 
	{
		Que = other.Que;
		count = other.count;
	}

	QuBiDirList(QuBiDirList &&other)
	{
		Que = other.Que;
		count = other.count;
	}

	QuBiDirList<T> &operator=(const QuBiDirList &other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Que = other.Que;
	}

	QuBiDirList<T> &operator=(QuBiDirList &&other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Que = other.Que;
	}

	~QuBiDirList();

	void Push(T element) override 
	{
		if (Que->GetSize() < count)
		{
			Que->Push(element, Que->GetSize());
		}
	}

	T Pop() override 
	{
		return Que->Remove(1);
	}

	T Peek() override 
	{
		return Que->Peek(1);
	}

	bool CheckQ() override 
	{
		return Que->CheckL();
	}

	friend ostream & operator << (ostream & stream, const QuBiDirList<T> &a);

};

template<typename T>

QuBiDirList<T>::~QuBiDirList()
{
	delete Que;
}

template<typename T>

ostream & operator << (ostream & stream, const QuBiDirList<T> &a)
{
	QuBiDirList<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}