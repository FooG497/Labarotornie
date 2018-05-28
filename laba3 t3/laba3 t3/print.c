#include "Header.h"
#include <math.h>
void print(int n, int k)
{
	int i = 0;
	double a;
	do {
		if (i % k == 0 && i != 0) {
			i++;
			continue;
		}
		a= pow(-1, i)*(i + 1) / (pow(3, i) - pow(2, i));
		printf("%.4f ", a);
		i++;
	} while (i < n);
	printf("\n");
}
