#include "main.h"

/**
 * puts2 - Prints strings that falls on even position
 * @str: Pointer variable
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{

		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
