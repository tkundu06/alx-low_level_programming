#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: parameter that will print number of arguments
 * @argv: the actual string value passed to the
 *  command line argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
