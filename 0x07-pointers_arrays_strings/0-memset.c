#include <stdio.h>

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Returns a pointer to the memory area s
 * @b: constant byte b
 * @n: bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
