#include<stdio.h>
#include"Header.h"
#include<conio.h>

void incrementStackVariable()
{
	int i;
	printf("\n������� ����� �����\n");
	scanf_s("%i", &i);
	printf("\n�����: %p\n ��������:%d\n\r ", &i, i);
	increment(&i);
	printf("\n�����: %p\n ��������:%d\n\r ", &i, i);
}