#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: search s, the return a pointer to the bytes in s
 * @accept: string to search s in
 * Return: a pointer to the byte in s that matches of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
