#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <math.h>
double f(float x);
int main()
{
	setlocale(LC_ALL, "Russian");
	float x;
	printf("¬ведите x=\n");
	scanf_s("%f", &x);
	printf("x=%f\n", x);
	printf("f(x)=%4f\n", f(x));
	system("pause");
	return 0;
}