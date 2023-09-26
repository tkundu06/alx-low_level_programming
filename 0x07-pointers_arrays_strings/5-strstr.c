#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that will locate a substring
 * @haystack: string where the search to locate substring is done
 * @needle: the substring that the function searches for
 * Return: pointer to the begining of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
