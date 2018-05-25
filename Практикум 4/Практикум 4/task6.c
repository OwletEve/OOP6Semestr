#include<stdio.h>
#include"Header.h"
#include<conio.h>

void sort(int *arr, int n)

{
	int i, j, step;
	int k;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			k = arr[i];
			for (j = i; j >= step; j -= step)
			{
				if (k < arr[j - step])
					arr[j] = arr[j - step];
				else
					break;
			}
			arr[j] = k;
		}
}

void sortStackArray()
{
	int Ar[5];
	int n = 5;

	printf("\n���������� ��������� �������: %d\n",n);
	readArray(Ar, n);
	printf("\n������ ������:\n");
	writeArray(Ar, n);
	printf("\n��������������� ������:\n");
	sort(Ar, n);
	writeArray(Ar, n);
}

void sortHeapArray()
{
	int n = 0;
	printf("\n���������� ��������� �������: %d\n", n);
	scanf_s("%d", &n);
	int *Ar = (int *)malloc(n*sizeof(int));

	printf("\n���������� ��������� �������: %d\n", n);
	readArray(Ar, n);
	printf("\n������ ������:\n");
	writeArray(Ar, n);
	printf("\n��������������� ������:\n");
	sort(Ar, n);
	writeArray(Ar, n);

	free(Ar);
}