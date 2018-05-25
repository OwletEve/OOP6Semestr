#include<math.h>
#include<stdio.h>
#include<locale.h>
#include"Header.h"

void print(int n, int k)
{
	int i = 0;
	double a;

	while (i < n) 
	{
		if (i % k == 0 && i != 0) {
			i++;
			continue;
		}
		a = pow(-1, i)*pow(2, i) / (pow(i, i + 1) + 1);
		printf("%.4f ", a);
		i++;
	}
	printf("\n");
}