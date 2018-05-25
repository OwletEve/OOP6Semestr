#include<stdio.h>
#include"Header.h"
#include<conio.h>

void incrementStackVariable()
{
	int i;
	printf("\nВведите целое число\n");
	scanf_s("%i", &i);
	printf("\nАдрес: %p\n Значение:%d\n\r ", &i, i);
	increment(&i);
	printf("\nАдрес: %p\n Значение:%d\n\r ", &i, i);
}