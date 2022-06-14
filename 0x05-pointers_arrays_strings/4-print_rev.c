#include "main.h"

/**
 * print_rev - Print Reversed string
 * @s: Pointer variable for string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	while (counter--)
	{
		_putchar(s[counter]);
	}

	_putchar('\n');
}
