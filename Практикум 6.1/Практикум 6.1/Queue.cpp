#include"Queue.h"
#include"iostream"
#include"conio.h"
using namespace std;

Qu::Qu(int count)
{
	arr = new int[count];
}

Qu::~Qu()
{
	delete[] arr;
}

Qu::Qu(const Qu &other)
{
	arr = new int[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}

Qu &Qu::operator=(const Qu &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new int[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}

Qu &Qu::operator=(Qu &&other)
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

Qu::Qu(Qu &&other)
{
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}

int Qu::GetSize()
{
	return this->size;
}

int Qu::Pop()
{
	if (size > 0)
	{
		int element = arr[start];
		start = (start + 1) % count;
		size--;
		return element;
	}
	return 0;
}

int Qu::Peek()
{
	return arr[start];
}

bool Qu::Check()
{
	return (size > 0);
}

void Qu::Push(int element)
{
	if (size < count)
	{
		arr[end] = element;
		end = (end + 1) % count;
		size++;
	}
}

ostream& operator << (ostream&stream, const Qu&a)
{
	Qu b = a;
	stream << "=====\n";
	for (int i = 0; i <b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}


