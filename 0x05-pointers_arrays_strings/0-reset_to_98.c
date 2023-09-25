#include <stdio.h>
/**
 * reset_to_98 - set the value of int to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - modify a variable n from outside
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
