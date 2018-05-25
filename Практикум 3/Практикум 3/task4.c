#include<math.h>
#include<stdio.h>
#include"Header.h"


int findFirstElement(double eps)
{
	int i = 0;
	double a	;
	while (true)
	{
		a = pow(-1, i)*pow(2, i) / (pow(i, i + 1) + 1);
		if (fabs(a) <= eps) break;
		i++;
	}
	return i;
}