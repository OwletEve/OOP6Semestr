
#include "task8.h"
#include <math.h>
#include <stdio.h>
#include <locale.h>

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
