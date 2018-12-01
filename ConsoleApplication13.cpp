#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#sizeOfMatrix n 5
void sort(int matrix[n][n]);
int min(int matrix[n][n], int r[n]);

int main()
{
	int multiplication, i, j, matrix[n][n], minInColumns[n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("matrix[%d][%d]=", i + 1, j + 1);
			scanf_s("%d", &matrix[i][j]);

		}
	}
	sort(matrix);
	min(matrix, minInColumns);
	multiplication = 1;
	for (i = 0; i < n; i++)
	{
		multiplication *= minInColumns[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%5d", matrix[i][j]);

		}
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("minimal value of %d column is %d\n", i + 1, minInColumns[i]);
	}
	printf("multiplication=%d", multiplication);
}
void sort(int a[n][n])
{
	int i, k, j, c;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < n - 1; j++)
			{
				if (a[i][j] > a[i][j + 1])
				{
					c = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = c;
				}
			}
		}
	}
}
int min(int a[n][n], int minInColumns[n])
{
	int i, j, min;

	for (j = 0; j < n; j++;)
	{
		min = a[1][j];
		for (i = 0; i < n; i++)
		{

			if (min > a[i][j])
			{
				min = a[i][j];

			}
		}
		minInColumns[j] = min;
	}
	return 0;
}
