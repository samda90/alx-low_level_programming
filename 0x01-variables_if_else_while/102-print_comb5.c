#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _, _i, _j, _k;

	for (_ = 0; _ <= 9; _++)
	{
		for (_i = 0; _i <= 9; _i++)
		{
			for (_j = _; _j < 10; _j++)
			{
				for (_k = _i + 1; _k < 10; _k++)
				{
					putchar((_) + '0');
					putchar((_i) + '0');
					putchar(' ');
					putchar((_j) + '0');
					putchar((_k) + '0');
					if (_ == 9 && _i == 8 && _j == 9 && _k == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
