#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints array content
 * @a: Point varibale for array
 * @n: Size of array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
