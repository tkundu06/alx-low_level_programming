#include <stdio.h>
/**
 * main - Prints the sizes of various data types
 *
 * Return: 0 success
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(unsigned int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(unsigned long
				long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
