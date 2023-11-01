#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The parameter is the pointer to the string that
 * will be printed
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
