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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
