#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
