#pragma once
#include"Qu.h"

template<typename T>

class QuArr : public Qu<T>

{
	T *array;
	int count;
	int end = 0, start = 0, size = 0;

public:

	QuArr(int count); //инициализация
	QuArr(const QuArr&other); //копировать
	QuArr(QuArr&&other); //переместить
	QuArr&operator=(const QuArr&other); //присвоить
	QuArr&operator=(QuArr&&other); //присваивоить перемещением
	~QuArr(); //деструктор
	int GetSize();

	void Push(T element) override//Добавление
	{
		if (size < count)
		{
			array[end] = element;
			end = (end + 1) % count;
			size++;
		}
	};

	T Pop() override//Удаление 
	{
		if (size > 0)
		{
			T element = array[start];
			start = (start + 1) % count;
			size--;
			return element;
		}
		return 0;
	};

	T Peek() override//Просмотр 
	{
		return array[start];
	};

	bool Check() override//Проверить наличие
	{
		return (size > 0);
	}
	friend ostream& operator << (ostream&stream, const QuArr<T>&a); //Вывод
};

	 template<typename T>
	QuArr<T>::QuArr(int count)
		 : count(count)
	{
		 array = new T[count];
	}

	template<typename T>

	QuArr<T>::~QuArr()
	{

		delete[] array;

	}

     template<typename T>

	QuArr<T>::QuArr(const QuArr&other)
	{
		array = new T[other.count];
	    count = other.count;
	    end = other.end;
	    start = other.start;
	    size = other.size;
	 for (int i = 0; i < count; ++i)
	 {
		array[i] = other.array[i];
	 }
    }

template<typename T>

QuArr<T>&QuArr<T>::operator=(const QuArr&other)
	{
		if (this == &other)
		{
			return *this;
		}
		delete[] array;
	    array = new T[other.count];
		count = other.count;
		for (int i = 0; i < count; ++i)
		{
			array[i] = other.array[i];
		}
	}

	template<typename T>
	QuArr<T>&QuArr<T>::operator=(QuArr&&other)
	{
		if (this == &other)
		{
			return *this;
		}
		delete[] array;
		array = other.array;
		count = other.count;
		other.array = nullptr;
	}

	template<typename T>
	QuArr<T>::QuArr(QuArr&&other)
	{
		array = other.array;
		count = other.count;
		other.array = nullptr;
	}

	template<typename T>
	int QuArr<T>::GetSize()
	{
		return this->size;
	}
	;

	template<typename T>
	ostream& operator << (ostream&stream, const QuArr<T>&a)
	{
		QuArr<T> b = a;
		stream << "=====\n";
		for (int i = 0; i <b.count; i++)
		{
			stream << "| " << b.Pop() << "\n";
		}
		stream << "=====\n";
	    return stream;
	}