#pragma once
#include"iostream"
#include"conio.h"
using namespace std;

class Qu
{
	int *arr;
	int count;
	int start = 0, end = 0, size = 0;

public:
	Qu(int count); //инициализация
	Qu(const Qu&other);//копировать
	Qu(Qu&&other);//переместить
	Qu&operator=(const Qu&other);//присвоить
	Qu&operator=(Qu&&other);//присвоить перемещением
	~Qu();//деструктор
	int GetSize();
	void Push(int element);//Добавление
	int Pop();//Удаление
	int Peek();//Просмотр
	bool Check();//Проверить наличие
	friend ostream& operator << (ostream&stream, const Qu&a); //Вывести
};
