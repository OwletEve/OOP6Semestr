#include<math.h>
#include<locale.h>
#include<stdio.h>
#include"task3.h"
const double x;
const double y;
double func;
double k;
double func1;
int main()
{
	setlocale(LC_CTYPE, "RU");
	int isBreak = false;
	while (!isBreak)
	{
		printf("Выберите необходимый пункт: \n1. Задание 1 \n2.Задание 2 \n3. Выход\n ");
		switch (_getch())
		{
		case '1':
			printf("Введите х:y ");
			scanf_s("%lf:%lf", &x, &y);
			func = isInArea(x, y);
			printf("Ответ: %lf% ", func);
			system("pause");
			return 0;
			break;

		case '2':
			printf("Введите k = ");
			scanf_s("%lf", &k);
			func1 = f(k);
			printf("x=%lf\n", k);
			printf("f=%lf\n", func1);

			system("pause");
			break;

		case '3':
			system("cls");
			printf("\n\n\nДо встречи \n \n");
			system("pause");
			return 0;
			break;

		default:
			printf("Неверный ввод");
			break;
		}
	}
}