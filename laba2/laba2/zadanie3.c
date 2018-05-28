#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <math.h>
_Bool isInArea(double x, double y);
double f(double x);

int main()
{
	float x, y;
	setlocale(LC_ALL, "Russian");
	printf("Введите номер задания:");
	switch (_getch())
	{
	case '1':
		printf("\nЗадание 1\n");
		printf("Введите координаты точки\nx=");
		scanf_s("%f", &x);
		printf("y=");
		scanf_s("%f", &y);
		if (isInArea(x, y)) {
			printf("Заданная точка попадает в выделенную область\n");
		}
		else {
			printf("Заданная точка не попадает в выделенную область\n");
		}
		break;
	case '2':
		printf("\nЗадание 2\n");
		printf("Введите значение x\nx=");
		scanf_s("%f", &x);
		printf("%.4f\n", f(x));
		break;
	default:
		printf("\nВы выбрали неверный номер\n");
		break;
	}
	system("pause");
	return 0;
}
