#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @dest: bytes from memory area src are copied here
 * @src: memory area to copy from
 * @n: number of bytes from memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
