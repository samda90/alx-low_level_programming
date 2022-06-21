#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte,
 *
 * @a: memory area.
 * @c: constant byte.
 * @b: number of bytes filled.
 *
 * Return: the pointer to dest.
 */
char *_memset(char *a, char c, unsigned int b)
{
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		*(a + i) =  c;
	}

	return (a);
}
