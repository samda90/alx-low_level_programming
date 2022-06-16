#include "main.h"

/**
 * strcat - function that concatenates two strings
 * @s1 s2: pointer variable
 *
 * dest - is the destination where the source
 * src - is the the string to me moved
 * Return: Concatenation of two strings
 * Main - Void
 * _strcat - used to concatenate strings
 */
char *_strcat(char *dest, char *src)

{
int main(void)
{
	char ch1[50] = "";
	char ch2[50] = "";

	printf("\n 1st String : [ %s]", ch1);
	printf("\n\n 2nd String : [ %s ]", ch2);
	strcat(ch1, ch2);
	printf("\n\n Concatenated String is : [ %s ]\n", ch1);
	return (0);
}

