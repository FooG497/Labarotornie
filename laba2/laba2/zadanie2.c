#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <math.h>
double f(double x);

/*int main()
{
	float x;
	setlocale(LC_ALL, "Russian");
	printf("¬ведите значение x\nx=");
	scanf_s("%f", &x);
	printf("%.4f\n", f(x));
	system("pause");
	return 0;
}*/
double f(double x)
{
	if (x <= 9) {
		return cos(2*x)+9;
	}
	else {
	
		return -(cos(x) / (x - 9));
	}
}


