#include <stdio.h>

/**
 * main - prints the letters of alphabet using while nested loop
 * first in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'A';
	int y = 'a';

	while (x <= 'Z')
	{
		while (y <= 'z')
		{
			putchar(y);
			y++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
