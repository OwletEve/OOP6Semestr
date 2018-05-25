#include<math.h>
#include<locale.h>
#include<stdio.h>
#include"task3.h"

double f(double x)
{
	double f;
	if (x <= 3)
		f = 12 / (2 * x*x + 1);
	else 
		f = 1.2*x*x - 3 * x - 9;
	return f;
}
