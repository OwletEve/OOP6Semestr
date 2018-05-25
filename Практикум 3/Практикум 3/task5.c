#include<math.h>
#include<stdio.h>
#include<locale.h>
#include"Header.h"

int findFirstNegativeElement(double eps)
{

	int i = 0;
	double a;
	while (true)
	{
		a = pow(-1, i)*pow(2, i) / (pow(i, i + 1) + 1);
		if (fabs(a) <= eps && a < 0) return i;
		i++;
	}
	return i;
}