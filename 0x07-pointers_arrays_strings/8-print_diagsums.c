#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: This is the array name
 * @size: This is the array size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int sum_1 = 0;
	int sum_2 = 0;

	while (x <= (size * size))
	{
		sum_1 = sum_1 + a[x];
		x = x + size + 1;

		while (y < (size * size - 1))
		{
			sum_2 += a[y];
			y = y + size - 1;
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
