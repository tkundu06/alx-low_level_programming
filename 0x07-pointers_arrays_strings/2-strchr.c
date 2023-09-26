#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function to locate a character in a string
 * @s: string the function will check
 * @c: point returned on first occurence
 * Return: returns pointer of first occurence of c
 * Return: NULL if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
