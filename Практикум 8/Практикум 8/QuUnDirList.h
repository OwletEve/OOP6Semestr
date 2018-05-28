#pragma once
#include "Stor.h"
#include "UnDirList.h"

template<typename T>

class QuUnDirList : public Stor<T>
{
	UnDirList<T> *Que;
	int count;

public:
	QuUnDirList(int count)
		: Que(), count(count) {}

	QuUnDirList(const QuUnDirList &other) 

	{
		Que = other.Que;
		count = other.count;
	}

	QuUnDirList(QuUnDirList &&other)

	{
		Que = other.Que;
		count = other.count;
	}

	QuUnDirList<T> &operator=(const QuUnDirList &other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Que = other.Que;
	}

	QuUnDirList<T> &operator=(QuUnDirList &&other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Que = other.Que;
	}

	~QuUnDirList();

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

	friend ostream & operator << (ostream & stream, const QuUnDirList<T> &a); 
};

template<typename T>

QuUnDirList<T>::~QuUnDirList()
{
	delete Que;
}

template<typename T>

ostream & operator << (ostream & stream, const QuUnDirList<T> &a)
{
	QuUnDirList<T> b = a;
	stream << "=====\n";

	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}

	stream << "=====\n";
	return stream;
}
;
