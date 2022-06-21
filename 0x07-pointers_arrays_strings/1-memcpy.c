#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n-bytes from memory area,
 *
 * @dest: destination memory area.
 * @src: source memory area.
 * @b: bytes filled.
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int b)
{
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		dest[i] =  *(src + i);
	}

	return (dest);
}
