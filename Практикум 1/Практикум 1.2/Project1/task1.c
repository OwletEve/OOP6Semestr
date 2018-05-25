#include<stdio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES 

int main(int arcg, char *argv)
{
	setlocale(LC_CTYPE, "RU");
		int x = 1000;
	float f;

	f = (cos((3 * 3.14 / 8) - (x / 4))*cos((3 * 3.14 / 8) - (x / 4))) - (cos((11 * 3.14 / 8) + (x / 4))*cos((11 * 3.14 / 8) + (x / 4)));
		printf("x=%d/n ", x);
		printf("f=%f/n ", f);

		printf("¬ведите х = ");
			scanf_s("%d", &x);
			f = (cos((3 * 3.14 / 8) - (x / 4))*cos((3 * 3.14 / 8) - (x / 4))) - (cos((11 * 3.14 / 8) + (x / 4))*cos((11 * 3.14 / 8) + (x / 4)));
			printf("x=%d/n ", x);
			printf("f=%f/n ", f);
			
			system("pause");
			return 0;

}