#include <math.h>
double f(float x)
{
	return 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
}