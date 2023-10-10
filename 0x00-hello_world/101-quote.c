#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print string
 * followed by a new line, to the standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *print_Str = "and that piece of art is
		useful\" - Dora Korpar, 2015-10-19\n";

	write(2, print_Str, 59);
	return (1);
}
