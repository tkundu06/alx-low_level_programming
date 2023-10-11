#include "main.h"

/**
 * print_alphabet_x10 - Prints letters of alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 0;

	while (y <= 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		x = 'a';
		y++;
		_putchar('\n');
	}
}
