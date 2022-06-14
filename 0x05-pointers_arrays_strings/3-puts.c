#include "main.h"

/**
 * _puts - Prints a given string
 * @str: Pointer varibale to string
 *
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
