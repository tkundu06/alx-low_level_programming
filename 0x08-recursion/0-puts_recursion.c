#include "main.h"

/**
 * _puts_recursion - recursive function to print the string
 * @s: the pointer to hold all the characters that will be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

