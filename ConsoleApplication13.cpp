#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#define n 5
void sort(int matr[n][n]);
int min(int matr[n][n], int r[n]);

int main()
{
	int dobutok, i, j, matr[n][n], r[n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("matr[%d][%d]=", i + 1, j + 1);
			scanf_s("%d", &matr[i][j]);

		}
	}
	sort(matr);
	min(matr, r);
	dobutok = 1;
	for (i = 0; i < n; i++)
	{
		dobutok *= r[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%5d", matr[i][j]);

		}
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("minimal value of %d column is %d\n", i + 1, r[i]);
	}
	printf("dobutok=%d", dobutok);
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
int min(int a[n][n], int r[n])
{
	int i, j, min;

	for (j = 0; j < n; j++)
	{
		min = a[1][j];
		for (i = 0; i < n; i++)
		{

			if (min > a[i][j])
			{
				min = a[i][j];

			}
		}
		r[j] = min;
	}
	return 0;
}
