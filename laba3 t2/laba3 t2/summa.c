#include "Header.h"
#include <math.h>
double summ(int n)
{
	int i = 0;
	double a = 0;
	while (i < n) {
		a = pow(-1, i)*(i + 1) / (pow(3, i) - pow(2, i));
		i++;
	}
	return a;
}
