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
	Qu(int count); //�������������
	Qu(const Qu&other);//����������
	Qu(Qu&&other);//�����������
	Qu&operator=(const Qu&other);//���������
	Qu&operator=(Qu&&other);//��������� ������������
	~Qu();//����������
	int GetSize();
	void Push(int element);//����������
	int Pop();//��������
	int Peek();//��������
	bool Check();//��������� �������
	friend ostream& operator << (ostream&stream, const Qu&a); //�������
};
