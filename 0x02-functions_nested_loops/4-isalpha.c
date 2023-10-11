#include <ctype.h>

/**
 * _isalpha - Function to check alphabetic character
 * @c: parameter of type int
 *
 * Return: Always 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
