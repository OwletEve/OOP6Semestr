#include <math.h>
#include <stdio.h>
#include <locale.h>


double f(double x1) {
	double f;
	f = (cos((3 * 3.14 / 8) - (x1 / 4))*cos((3 * 3.14 / 8) - (x1 / 4))) - (cos((11 * 3.14 / 8) + (x1 / 4))*cos((11 * 3.14 / 8) + (x1 / 4)));
	return f;
}
