#include<math.h>
#include<stdio.h>
#include<locale.h>
#include"task3.h"


_Bool isInArea(double x, double y)
{
	double f;
	if (x <= 0 && x >= (-1) && y <= 0 & y >= (-1))
		return 1;
	else if (x >= 0 && y >= 0 && sqrt(x*x + y * y) <= 1)
		return 1;
	else
		return 0;
}
