#include <stdio.h>

/**
 * main - for loop to print letters of alphabet in lowercase
 * continue statement except q and e letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
