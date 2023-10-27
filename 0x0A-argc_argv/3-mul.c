#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes two numbers, mutiply and give results
 * @argc: Will check number of arguments (numbers) received
 * @argv: Will take the actual numbers(two numbers) provided
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc == 3)
	{
		result = 1;
		for (x = 1; x < argc; x++)
		{
			y = atoi(argv[x]);
			result *= y;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
