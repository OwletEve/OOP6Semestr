#pragma once
#include<stdio.h>
#include<cmath>
#include<locale.h>


class Complex
{
public:
	int GetZ();
	int GetY();
	Complex(int, int);
	Complex(int);
	Complex();
	Complex operator+ (Complex);
	Complex operator* (Complex);
	Complex operator* (double);
private:
	double z;
	double y;
	
};