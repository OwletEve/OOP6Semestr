#include"Header.h"
#include<cmath>
#include<stdio.h>

double f(Complex z)
{
	double k = double(z.GetZ()) * 2;
	double l = double(z.GetZ()) + 1;
	return k + exp(5)*l;
}