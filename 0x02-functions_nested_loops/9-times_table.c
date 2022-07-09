#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, M;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			M = a * b;
			_putchar(44);
			_putchar(32);
			if (M <= 9)
			{
				_putchar(32);
				_putchar(M + 48);
			}
			else
			{
				_putchar((M / 10) + 48);
				_putchar((M % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
