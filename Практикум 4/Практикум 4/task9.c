#include<stdio.h>
#include"Header.h"
#include<conio.h>
#include<locale.h>

int main()
{
	int isBreak = false;
	setlocale(LC_ALL, "Rus");
	while (!isBreak)
	{
		printf("\n������� ����� ������� (c 1 �� 4): \n ��� ������ ������� 0\n");

		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\n������� 2\n");
			incrementStackVariable();
			break;
		case '2':
			system("cls");
			printf("\n������� 3\n");
			incrementHeapVariable();	
			break;
		case '3':
			system("cls");
			printf("\n������� 7\n");
			sortStackArray();
			break;
		case '4':
			system("cls");
			printf("\n������� 8\n");
			sortHeapArray();
			break;
		case '0':
			system("cls");
			printf("\n���� :)\n");
			isBreak = true;
			system("pause");
			return 0;
		default:
			system("cls");
			printf("\n�������� ����\n");
			break;
		}
	}
	system("pause");
	return 0;
}