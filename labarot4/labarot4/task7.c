#include <stdio.h>

void writeArray(int *arr, int n);
void readArray(int *arr, int n);
void sort(int *arr, int first, int last);

void sortStackArray()
{
	const int len = 5;
	int arr[5];
	printf("N = %d\n", len);
	readArray(arr, len);
	writeArray(arr, len);
	sort(arr, 0, len - 1);
	writeArray(arr, len);
}