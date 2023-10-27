#include <stdio.h>

/**
 * main - prints my name
 * @argc: parameter used to count number of
 * command line argument
 * @argv: Array that takes number of strings passed to program
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
