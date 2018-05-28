#pragma once
#include"iostream"
#include"conio.h"

using namespace std;
template<typename T>

class Qu
{
public:
	virtual void Push(T element) = 0; //Добавление
	virtual T Pop() = 0; //Удаление 
	virtual T Peek() = 0; //Просмотр 
	virtual bool Check() = 0; //Проверить наличие

};