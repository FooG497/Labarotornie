
#include "Header.h"
#include <math.h>
void print(int n, int k)
{
	int i;
	double a;
	for (i = 0; i < n + 1; i++) {
		if (i % k == 0) continue;
		a = pow(-1, i)*(i + 1) / pow(3, i) - pow(2, i);
		printf("%.4f ", a);
	}
	printf("\n");
}
