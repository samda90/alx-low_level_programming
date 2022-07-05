#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - a function that prints a struct dog
 *
 *@d : TAG pointer parameter for struct dog
 *
 *return : No return
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name = (nil)\n");
	if (d->owner == NULL)
		printf("Owner = (nil)\n");
	else if (d != NULL)
	{
		printf("Name = %s\n", (*d).name);
		printf("Age = %f\n", (*d).age);
		printf("Owner = %s\n", (*d).owner);
	}
}
