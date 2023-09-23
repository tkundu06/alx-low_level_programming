#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char i = 'a';
	int x = 0;
	
	while (x < 10)
	{
		putchar(x);
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		x++;
	}
}
