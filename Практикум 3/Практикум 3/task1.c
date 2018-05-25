#include<math.h>
#include<stdio.h>
#include<locale.h>
#include"Header.h"

double summ(int n)
{
	int i = 0;
	double a;
	while (i<n)
	{
		a = pow(-1, i)*pow(2, i) / (pow(i, i + 1) + 1);
		i++;
	}
	return a;
}