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
		printf("�������� ����������� �����: \n1. ������� 1 \n2.������� 2 \n3. �����\n ");
		switch (_getch())
		{
		case '1':
			printf("������� �:y ");
			scanf_s("%lf:%lf", &x, &y);
			func = isInArea(x, y);
			printf("�����: %lf% ", func);
			system("pause");
			return 0;
			break;

		case '2':
			printf("������� k = ");
			scanf_s("%lf", &k);
			func1 = f(k);
			printf("x=%lf\n", k);
			printf("f=%lf\n", func1);

			system("pause");
			break;

		case '3':
			system("cls");
			printf("\n\n\n�� ������� \n \n");
			system("pause");
			return 0;
			break;

		default:
			printf("�������� ����");
			break;
		}
	}
}