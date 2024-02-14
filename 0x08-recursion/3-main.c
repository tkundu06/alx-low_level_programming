#include "main.h"
#include <stdio.h>

/**
 * main - will check the function that returns factorial of any given number
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
