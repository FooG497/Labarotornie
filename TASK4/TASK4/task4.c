#include <locale.h>
#include <math.h>
float x, result;
void f();
int main()
{
	setlocale(LC_ALL, "Russian");
	printf("¬ведите x=\n");
	scanf_s("%f", &x);
	f();
	printf("x=%f\n", x);
	printf("f(x)=%f\n", result);
	system("pause");
	return 0;
}
void f()
{
	result = 1 - 1 / 4 * sin(x)*sin(x) * (2 * x) + cos(2 * x);
}