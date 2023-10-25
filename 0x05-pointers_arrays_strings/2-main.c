#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Declare variable that holds string
 * values, then calls functions that returns string length
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
