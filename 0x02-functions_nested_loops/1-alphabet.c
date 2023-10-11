#include "main.h"

/**
 * print_alphabet - Function to print alphabet letters
 * in lower case
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
