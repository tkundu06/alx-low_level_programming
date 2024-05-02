#include <stdio.h>

/**
 * main - Prints all single digit of base 10 using while loop
 * starting from 0, then followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
