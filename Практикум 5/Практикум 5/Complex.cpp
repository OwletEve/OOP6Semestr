#include"Header.h"
#include<cmath>
#include<stdio.h>
#include<locale.h>


Complex::Complex(int a, int b)
{
	z = a;
	y = b;
}

Complex::Complex(int a)
{
	z = a;
	y = a;
}

Complex::Complex()
{
	z = 1;
	y = 1;
}

int Complex::GetZ()
{
	return z;
}

int Complex::GetY()
{
	return y;
}

Complex Complex::operator+(Complex p)
{
	int a = 0;
	int b = 0;
	a = p.GetZ()*y + z * p.GetY();
	b = y * p.GetY();
	Complex op(a, b);
	return op;

};

Complex Complex::operator*(double p)
{
	z = z * p;
	Complex op(z, y);
	return op;
}

Complex Complex::operator*(Complex p)
{
	int a, b;
	a = z * p.GetZ();
	b = y * p.GetY();
	Complex op(a, b);
	return op;
}
