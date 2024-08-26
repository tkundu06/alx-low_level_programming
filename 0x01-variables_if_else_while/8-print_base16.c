#include <stdio.h>

/**
 * main - Entry point to our program; print base-16 numbers in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int x;
	char y;

	x = '0';
	y = 'a';

	while (y <= 'f')
	{
		while (x <= '9')
		{
			putchar(x);
			x++;
		}
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
