#pragma once
#include"iostream"
#include"conio.h"

using namespace std;
template<typename T>

class Qu
{
public:
	virtual void Push(T element) = 0; //����������
	virtual T Pop() = 0; //�������� 
	virtual T Peek() = 0; //�������� 
	virtual bool Check() = 0; //��������� �������

};