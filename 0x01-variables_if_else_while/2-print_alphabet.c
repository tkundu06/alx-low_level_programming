#include <stdio.h>

/**
 * main - program prints alphabet in lowercase using while loop
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar("%c", x);
		x++;
	}
	putchar("\n");
	return (0);
}
