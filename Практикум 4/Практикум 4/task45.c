#include<stdio.h>
#include"Header.h"
#include<conio.h>
#include <locale.h>

void writeArray(int *Ar, int n)
{
	for (int i=0; i<n; i++)
	{
		printf("\n %d\n", Ar[i]);
	}
}

void readArray(int *Ar, int n)
{
	int q;
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i<n; i++)
	{
		printf("\n¬ведите %d элемент массива: \n", i);
		scanf_s("%d", &q);
		Ar[i] = q;
	}
}