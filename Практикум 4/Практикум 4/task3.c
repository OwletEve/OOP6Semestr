#include<stdio.h>
#include"Header.h"
#include<conio.h>

void incrementHeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));
	printf("\nВведите целое число\n");
	scanf_s("%d", i);
	printf("\nАдрес: %p\n Значение:%d\n\r ", &i, i);
	increment(i);
	printf("\nАдрес: %p\n Значение:%d\n\r ", &i, i);
	free(i);
}