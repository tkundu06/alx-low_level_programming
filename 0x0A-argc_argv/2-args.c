#include <stdio.h>

/**
 * main - The program prints all command line received
 * including the first one
 * @argc: Parameter checks the number of command line arguments
 * received
 * @argv: The parameter takes the actual parameters
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
