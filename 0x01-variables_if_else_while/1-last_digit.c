#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Each time the program is executed, a randon number
 * is assigned to the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	}/*
	else if (n < 0)
	{}*/
	else
	{
		printf("Last digit of %d is\n");
	}
	return (0);
}
