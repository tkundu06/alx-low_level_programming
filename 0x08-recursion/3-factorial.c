#include "main.h"

/**
 * factorial - function that gives factorial of any given number
 * @n: any integer number from user
 *
 * Return: nothing
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
