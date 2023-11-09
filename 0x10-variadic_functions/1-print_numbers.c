#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function to print numbers
 * @separator: Argument passed to parameter to print string
 * between numbers
 * @n: Count number of unnamed(unknown) variable lists
 * ...: unname(unknonw) variable list
 *
 * Return: nothing
 */
void print_numbers(const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
	}
	va_end(numbers)
}
