#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", (signed int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (signed int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (signed int)sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (signed int)sizeof(lli));
	printf("Size of a float: %d byte(s)\n", (signed int)sizeof(f));
	return (0);
}
