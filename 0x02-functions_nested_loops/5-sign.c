#include "main.h"
/**
 * print_sign - Function that will print sign of numbers
 * @n: Parameter for the function of type int
 *
 * Return: Always 1 if number (+), -1 if number (-)
 * and 0 if number is equal to zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
