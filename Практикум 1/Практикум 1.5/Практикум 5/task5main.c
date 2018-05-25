#include <math.h>
#include <stdio.h>
#include <locale.h>

double f(double x1);
void main(void)
{
	setlocale(LC_CTYPE, "RU");
	const double x = 1000;
	double func;
	func = f(x);
	printf("x=%d\n ", x);
	printf("f=%f\n ", func);

	printf("¬ведите х = ");
	scanf_s("%d", &x);
	func = f(x);
	printf("x=%d\n ", x);
	printf("f=%f\n ", func);

	system("pause");
	return 0;

}