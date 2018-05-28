#include <stdio.h>
#include "Header.h"
#include <locale.h>
int main()
{
	int n, k;
	float eps;
	int isBreak = false;
	setlocale(LC_ALL, "Russian");
	while (!isBreak)
	{
		printf("Введите номер пункта:");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("\nЗадание 1\n");
			printf("Введите число слагаемых\nn=");
			scanf_s("%i", &n);
			printf("Итоговая сумма = %.4f\n", summ(n));
			break;
		case '2':
			system("cls");
			printf("\nЗадание 2\n");
			printf("Введите точность подсчета суммы\neps=");
			scanf_s("%f", &eps);
			printf("Итоговая сумма = %.4f\n", summ2(eps));
			break;
		case '3':
			system("cls");
			printf("\nЗадание 3\n");
			printf("Введите число слагаемых\nn=");
			scanf_s("%i", &n);
			printf("Введите номер слагаемых, исключаемых из вывода\nk=");
			scanf_s("%i", &k);
			print(n, k);
			break;
		case '4':
			system("cls");
			printf("\nЗадание 4\n");
			printf("Введите условие подсчета\neps=");
			scanf_s("%f", &eps);
			printf("Номер первого элемента, удовлетворяющего условию = %i\n", findFirstElement(eps));
			break;
		case '5':
			system("cls");
			printf("\nЗадание 5\n");
			printf("Введите условие подсчета\neps=");
			scanf_s("%f", &eps);
			printf("Номер первого элемента, удовлетворяющего условию = %i\n", findFirstNegativeElement(eps));
			break;
		case '6':
			system("cls");
			printf("\nДо свидания\n");
			isBreak = true;
			break;
		default:
			system("cls");
			printf("\nВы выбрали неверный номер\n");
			break;
		}
	}
	system("pause");
	return 0;
}
