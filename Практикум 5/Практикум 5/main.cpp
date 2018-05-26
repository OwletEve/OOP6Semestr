#include"Header.h"
#include<cmath>
#include<locale.h>
#include<stdio.h>


double f(Complex z)
{
	double k = double(z.GetZ()) * 2;
	double l = double(z.GetZ()) + 1;
	return k + exp(5)*l;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int a = 0;
	int b = 0;
	double r = 0;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	Complex z(a, b);
	r = f(z);
	printf("y = %lf\n", r);
	system("pause");
	return 0;
}