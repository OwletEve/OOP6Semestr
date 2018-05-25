#include<stdio.h>
#include"Header.h"
#include<conio.h>

void increment(int *i)
{ 
	if (i != NULL) return 0;
	
		printf("\nАдрес: %p\n Значение:%d\n ",&i, *i);
		(*i)++;
		printf("\nАдрес: %p\n Значение:%d\n ", &i, *i);
	

}