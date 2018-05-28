#include <math.h>
float x, result;
void f()
{
	result = 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
}