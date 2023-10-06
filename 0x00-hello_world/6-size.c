#include <stdio.h>

/**
 * main - Prints sizes of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int w;
	long long int z;
	float i;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", (long unsigned int)sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (long long unsigned int)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(i));

	return (0);
}
