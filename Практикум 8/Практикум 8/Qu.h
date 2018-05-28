#pragma once
#include "Stor.h"

template<typename T>

class Qu
{
	Stor<T> *que;

public:

	~Qu() {}

	void setStrategy(Stor<T> *q)
	{
		que = q;
	}
	void Push(T element)
	{
		que->Push(element);
	}
	T Pop()
	{
		return que->Pop();
	}
	T Peek()
	{
		return que->Peek();
	}
	bool CheckQ()
	{
		return que->CheckQ();
	}
};