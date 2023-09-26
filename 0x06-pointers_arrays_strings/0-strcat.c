#include "main.h"

/**
 * _strcat - Function appends the src string to the dest string
 * @dest: String to append to
 * @src: appends this string to dest string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
		y++;
	for (x = 0; src[x]; x++)
		dest[y++] = src[x];

	return (dest);
}
