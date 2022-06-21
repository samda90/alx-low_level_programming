#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 *
 * @a: Array.
 *
 * Return: return void
 */

void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[a][b]);
		}
		putchar('\n');
	}
}
