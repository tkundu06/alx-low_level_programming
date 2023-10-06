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

	printf("Size of a char: %lu byte(s)", (unsigned)sizeof(x));
	printf("Size of an int: %lu byte(s)", (unsigned)sizeof(y));
	printf("Size of a long int: %lu byte(s)", (long unsigned)sizeof(w));
	printf("Size of a long long int: %lu byte(s)", (long long unsigned)sizeof(z));
	printf("Size of a float: %lu byte(s)", (unsigned)sizeof(i));

	return (0);
}
