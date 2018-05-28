#include <stdio.h>
#include <locale.h>
#include <math.h>

double f(float x)
{
	return 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	float x;
	printf("¬ведите x=\n");
	scanf_s("%f", &x);
	printf("x=%f\n", x);
	printf("f(x)=%f\n", f(x));
	system("pause");
	return 0;
}