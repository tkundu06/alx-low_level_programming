#include <stdio.h>

/**
 * main - Prints single digit number of base 10 starting from 0
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
