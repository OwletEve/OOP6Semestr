#include<stdio.h>
#include"Header.h"
#include<conio.h>

void increment(int *i)
{ 
	if (i != NULL) return 0;
	
		printf("\n�����: %p\n ��������:%d\n ",&i, *i);
		(*i)++;
		printf("\n�����: %p\n ��������:%d\n ", &i, *i);
	

}