#include "main.h"

/**
 * swap_int - Swap variable values
 * @a: Pointer variable argument a
 * @b: Pointer variable argument b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	/*Swapping values without a temp variable*/
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
