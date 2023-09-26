#include "main.h"
/**
 * _strspn - Function to get the prefix substring length
 * @s: number of bytes returned in the initial segment of s
 * @accept: bytes from accept are the only returned
 * Return: Number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
