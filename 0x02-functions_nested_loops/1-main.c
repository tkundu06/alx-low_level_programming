#include "main.h"

/**
 * print_alphabet - Function to print letters of the alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
