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
	printf("������� ����� �������:");
	switch (_getch())
	{
	case '1':
		printf("\n������� 1\n");
		printf("������� ���������� �����\nx=");
		scanf_s("%f", &x);
		printf("y=");
		scanf_s("%f", &y);
		if (isInArea(x, y)) {
			printf("�������� ����� �������� � ���������� �������\n");
		}
		else {
			printf("�������� ����� �� �������� � ���������� �������\n");
		}
		break;
	case '2':
		printf("\n������� 2\n");
		printf("������� �������� x\nx=");
		scanf_s("%f", &x);
		printf("%.4f\n", f(x));
		break;
	default:
		printf("\n�� ������� �������� �����\n");
		break;
	}
	system("pause");
	return 0;
}
