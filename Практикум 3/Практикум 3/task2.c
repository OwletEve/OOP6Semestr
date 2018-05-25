#include<math.h>
#include<stdio.h>
#include<locale.h>
#include"Header.h"

double summ2(double eps)
{
	int i = 0;
	double a = eps+1;
	double s = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*pow(2, i) / (pow(i, i + 1) + 1);
		s = +a;
		i++;
	}
	return s;
}