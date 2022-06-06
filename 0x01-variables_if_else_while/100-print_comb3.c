#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _, _i;

	for (_ = 0; _ < 9; _++)
	{
		for (_i = _ + 1; _i < 10; _i++)
		{
			putchar((_) + '0');
			putchar((_i) + '0');

			if (_ == 8 && _i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
