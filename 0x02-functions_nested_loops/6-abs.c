#include "main.h"
#include <stdlib.h>

/**
 * _abs - Function that computes the absolute value of an integer
 * @n: parameter taken to compute the absolute value
 *
 * Return: nothing
 */
int _abs(int n)
{
	int r;

	r = abs(n);
	if (abs(n) != 0)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
