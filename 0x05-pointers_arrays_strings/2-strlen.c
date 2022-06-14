#include "main.h"

/**
 * _strlen - Function that counts the length of a string
 * @s: Pointer variable
 *
 * Return: Length of String
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
