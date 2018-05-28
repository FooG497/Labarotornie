
#include "Header.h"
#include <math.h>
double summ(int n)
{
	int i;
	double a = 0;
	for (i = 0; i < n; i++)
	{
		a = pow(-1, i)*(i + 1) / pow(3, i) - pow(2, i);
	}
	return a;
}
