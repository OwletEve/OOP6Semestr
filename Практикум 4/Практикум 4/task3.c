#include<stdio.h>
#include"Header.h"
#include<conio.h>

void incrementHeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));
	printf("\n������� ����� �����\n");
	scanf_s("%d", i);
	printf("\n�����: %p\n ��������:%d\n\r ", &i, i);
	increment(i);
	printf("\n�����: %p\n ��������:%d\n\r ", &i, i);
	free(i);
}