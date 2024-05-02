#include <stdio.h>

/**
 * main - Entry point to our program; print base-16 numbers in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int ch = 0x0;

	while (ch <= 0xF)
	{
		printf("%x", ch);
		if (ch == 0xF)
		{
			printf("\n");
			break;
		}
		ch++;
	}

	return (0);
}
