#include<stdio.h>
#include<locale.h>
#include"Header.h"

int main()
{
	int n;
	int k;
	int isBreak = false;
	float eps;
	setlocale(LC_CTYPE, "rus");
	while (!isBreak)
	{
		printf("Выберите необходимый пункт: \n1. Задание 1 \n2.Задание 2 \n3.Задание 3 \n4.Задание 4 \n5.Задание 5 \n6. Выход ");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\nЗадание 1");
			printf("\n Введите число слагаемых n \n n= ");
			scanf_s("%i", &n);
			printf("\nОтвет: %.4f%\n  \n", summ(n));
			system("pause");
			break;

		case '2':
			system("cls");
			printf("\nЗадание 2");
			printf("\n Введите точность\n eps = ");
			scanf_s("%f", &eps);
			printf("\nОтвет: %.4f\n  \n", summ2(eps));
			system("pause");
			break;

		case '3':
			system("cls");
			printf("\nЗадание 3");
			printf("\nВведите число слагаемых\nn=");
			scanf_s("%i", &n);
			printf("\nВведите номер слагаемых, исключаемых из вывода\nk=");
			scanf_s("%i", &k);
			print(n, k);
			break;

		case '4':
			system("cls");
			printf("\nЗадание 4");
			printf("\n Введите условие подсчета\n eps = ");
			scanf_s("%f", &eps);
			printf("\nОтвет: %i\n  \n", findFirstElement(eps));
			system("pause");
			break;

		case '5':
			system("cls");
			printf("\nЗадание 5");
			printf("\n Введите условие подсчета\n eps = ");
			scanf_s("%f", &eps);
			printf("\nОтвет: %i\n  \n", findFirstNegativeElement(eps));
			system("pause");
			break;

		case '6':
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