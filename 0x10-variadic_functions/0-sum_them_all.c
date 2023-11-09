#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This is variadic function to return sum
 * of all its parameters
 * @n: Parameter that will count number of arguments
 * @...: Unnamed lists of arguments
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list mynumbers;

	va_start(mynumbers, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(mynumbers, int);
	}
	va_end(mynumbers);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sum);
	}
}
