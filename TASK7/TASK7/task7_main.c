#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include "func.h"
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