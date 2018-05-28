#include "Header.h"
#include <math.h>
#include <limits.h>
double summ2(double eps)
{
	int i = 0;
	double a = eps + 1, s = 0;
	while (fabs(a) > eps) {
		a = pow(-1, i)*(i + 1) / (pow(3, i) - pow(2, i));
		s = +a;
		i++;
	}
	return s;
}
