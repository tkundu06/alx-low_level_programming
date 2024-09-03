#include <stdio.h>

/**
 * main - Entry point into the program
 * Program prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Variable declaration and initialization*/
	int x = 1;
	int start = 0; /*Starting number for first iteration*/
	int count = 9; /*Number of times to print initial number*/


	while (x <= 9)
	{
		int y = x;
		int num = start;
		int times = count;

		while (y <= 9 && times > 0)
		{
			printf("%d", num);
			printf("%d", y);
			if (x == 9)
			{
				break;
			}
			printf(",");
			printf(" ");
			times--;
			y++;
		}
		start++;
		count--;
		x++;
	}

	printf("\n");

	/*Return zero to the main() calling function*/
	return (0);
}
