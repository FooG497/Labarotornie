#include <stdio.h>
#include <Windows.h>
#include <locale.h>
_Bool isInArea(double x, double y);
/*int main()
{
	float x, y;
	setlocale(LC_ALL, "Russian");
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
	system("pause");
	return 0; 
}*/
_Bool isInArea(double x, double y)
{
	if (x <= -1 && y <= -1) {
		if (x < 0 && y > 0) {
			return 0;
		}
		return 1;
	}
	else {
		return 0;
	}
}
