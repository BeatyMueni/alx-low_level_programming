#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: if element d is NULL, print 'nil' instead of element
 * if d is NULL, print nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
