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
		printf("\nВведите номер задания (c 1 по 4): \n Для выхода тыкните 0\n");

		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\nЗадание 2\n");
			incrementStackVariable();
			break;
		case '2':
			system("cls");
			printf("\nЗадание 3\n");
			incrementHeapVariable();	
			break;
		case '3':
			system("cls");
			printf("\nЗадание 7\n");
			sortStackArray();
			break;
		case '4':
			system("cls");
			printf("\nЗадание 8\n");
			sortHeapArray();
			break;
		case '0':
			system("cls");
			printf("\nПока :)\n");
			isBreak = true;
			system("pause");
			return 0;
		default:
			system("cls");
			printf("\nНеверный ввод\n");
			break;
		}
	}
	system("pause");
	return 0;
}