#include <ctype.h>
#include "main.h"

/**
 * _islower - Function to check lowercase character
 * @c: The function takes int c as the argument
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
