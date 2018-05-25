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

	printf("\nКоличество элементов массива: %d\n",n);
	readArray(Ar, n);
	printf("\nДанный массив:\n");
	writeArray(Ar, n);
	printf("\nОтсортированный массив:\n");
	sort(Ar, n);
	writeArray(Ar, n);
}

void sortHeapArray()
{
	int n = 0;
	printf("\nКоличество элементов массива: %d\n", n);
	scanf_s("%d", &n);
	int *Ar = (int *)malloc(n*sizeof(int));

	printf("\nКоличество элементов массива: %d\n", n);
	readArray(Ar, n);
	printf("\nДанный массив:\n");
	writeArray(Ar, n);
	printf("\nОтсортированный массив:\n");
	sort(Ar, n);
	writeArray(Ar, n);

	free(Ar);
}