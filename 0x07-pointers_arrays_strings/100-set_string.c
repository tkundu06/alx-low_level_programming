#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: dereference a pointer
 * @to: char where the value of a pointer is set
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
