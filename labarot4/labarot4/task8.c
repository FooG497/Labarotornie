#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void writeArray(int *arr, int n);
void readArray(int *arr, int n);
void sort(int *arr, int first, int last);

void sortHeapArray()
{
	int len = 0;
	printf("N = "); scanf("%d", &len);
	int *arr = (int *)malloc(sizeof(int)*len);
	readArray(arr, len);
	writeArray(arr, len);
	sort(arr, 0, len - 1);
	writeArray(arr, len);
	free(arr);
}