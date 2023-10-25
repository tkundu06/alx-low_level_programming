#include "main.h"

/**
 * swap_int - Function that swaps values of integers
 * @a: pointer, integer that will swap its value with b
 * @b: pointer, integer that will swap its value with a
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
