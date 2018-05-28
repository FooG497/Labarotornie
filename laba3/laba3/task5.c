
#include "Header.h"
#include <math.h>
#include <limits.h>
int findFirstNegativeElement(double eps)
{
	int i;
	double a;
	for (i = 0; i < INT_MAX; i++) {
		a = pow(-1, i)*(i + 1) / pow(3, i) - pow(2, i);
		if (fabs(a) <= eps && a < 0) break;
	}
	return i;
}
