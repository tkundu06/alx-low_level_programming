#include <stdio.h>

/**
 * main - Entry point to our program
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int d = 0;

	while (0 <= 9)
	{
		putchar('0' + d);
		if (d == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		d++;
	}
	putchar('\n');

	return (0);
}
