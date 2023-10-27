#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program will add numbers passed to command line
 * @argc: Parameter to count number of arguments passed to 
 * command line
 * @argv: Actual numbers that will be passed to command line
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;
	int sum;

	if (argc > 1)
	{
		for (x = 0; x < argc; x++)
		{
			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	else if (atoi(argv[x]) == '\0')
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
