#include <math.h>
#include <stdio.h>
#include <locale.h>


void f(void);
double x;
double result;

int main(void)
{
	setlocale(LC_CTYPE, "RU");
	f();
	printf("x=%d\n ", x);
	printf("f=%f\n ", result);

	printf("������� � = ");
	scanf_s("%d", &x);
	f();
	printf("x=%d\n ", x);
	printf("f=%f\n ", result);

	system("pause");
	return 0;

}
