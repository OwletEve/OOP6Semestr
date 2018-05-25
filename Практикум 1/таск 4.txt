#include <math.h>
#include <stdio.h>
#include <locale.h>

double x;
double result;

void f(void);

int main(void)
{
	setlocale(LC_CTYPE, "RU");
	f();
	printf("x=%d\n ", x);
	printf("f=%f\n ", result);

	printf("¬ведите х = ");
	scanf_s("%d", &x);
	f();
	printf("x=%d\n ", x);
	printf("f=%f\n ", result);

	system("pause");
	return 0;

}
void f(void)
{
	result = (cos((3 * 3.14 / 8) - (x / 4))*cos((3 * 3.14 / 8) - (x / 4))) - (cos((11 * 3.14 / 8) + (x / 4))*cos((11 * 3.14 / 8) + (x / 4)));
}