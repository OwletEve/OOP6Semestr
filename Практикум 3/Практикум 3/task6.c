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
		printf("�������� ����������� �����: \n1. ������� 1 \n2.������� 2 \n3.������� 3 \n4.������� 4 \n5.������� 5 \n6. ����� ");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\n������� 1");
			printf("\n ������� ����� ��������� n \n n= ");
			scanf_s("%i", &n);
			printf("\n�����: %.4f%\n  \n", summ(n));
			system("pause");
			break;

		case '2':
			system("cls");
			printf("\n������� 2");
			printf("\n ������� ��������\n eps = ");
			scanf_s("%f", &eps);
			printf("\n�����: %.4f\n  \n", summ2(eps));
			system("pause");
			break;

		case '3':
			system("cls");
			printf("\n������� 3");
			printf("\n������� ����� ���������\nn=");
			scanf_s("%i", &n);
			printf("\n������� ����� ���������, ����������� �� ������\nk=");
			scanf_s("%i", &k);
			print(n, k);
			break;

		case '4':
			system("cls");
			printf("\n������� 4");
			printf("\n ������� ������� ��������\n eps = ");
			scanf_s("%f", &eps);
			printf("\n�����: %i\n  \n", findFirstElement(eps));
			system("pause");
			break;

		case '5':
			system("cls");
			printf("\n������� 5");
			printf("\n ������� ������� ��������\n eps = ");
			scanf_s("%f", &eps);
			printf("\n�����: %i\n  \n", findFirstNegativeElement(eps));
			system("pause");
			break;

		case '6':
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