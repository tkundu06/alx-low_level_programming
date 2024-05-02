#include <stdio.h>

/**
 * main - Entry point to our program; print base-16 numbers in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int h = 0;

	while (h <= 9)
	{
		putchar('0' + h);
		h++;
	}

	int i = 0;

	while (i < 6)
	{
		putchar('a' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
