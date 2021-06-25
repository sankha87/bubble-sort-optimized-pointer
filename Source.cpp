// C program for implementation of Bubble sort - best case time complexity
// Optimized Bubble Sort Algorithm
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int *ptr, int n)					// A function to implement bubble sort
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;

		for (int j = 0; j < n - i - 1; j++)
		{
			if (*(ptr + j) > *(ptr + j + 1))
			{
				swap((ptr + j), (ptr + j + 1));
				flag = 1;			// if swapping happens update flag to 1
			}
		}
		// if value of flag is zero after all the iterations of inner loop then break out
		if (flag == 0)
		{
			break;
		}
	}
}

void printArray(int *p, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", *(p + i));
	printf("\n");
}

int main()
{
	int *arr, n;
	printf("How many elements : ");
	scanf("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	printf("enter elements : \n");
	for (int i = 0; i<n; i++)
		scanf("%d", arr + i);

	printf("\nbefore Sorting, the array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr + i));

	bubbleSort(arr, n);
	printf("\n\nSorted Array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr + i));

	_getch();
}