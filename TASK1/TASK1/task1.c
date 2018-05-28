#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(int argc, char *argv)
{
	setlocale(LC_ALL, "Russian");
	int x = 1;
	float f;
	f = 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
	printf("x=%d\n", x);
	printf("f(x)=%f\n", f);
	printf("¬ведите x=");
	scanf_s("%d", &x);
	f = 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
	printf("x=%d\n", x);
	printf("f(x)=%f\n",f);
	system("pause");
	return 0;
}