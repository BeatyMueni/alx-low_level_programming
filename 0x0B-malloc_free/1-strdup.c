#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given a s parameter
 * @str: string to duplicate
 *
 * Return: NULL if str = NULL, else return pointer to new duped string
 */

char *_strdup(char *str)
{
		char *a;
		int i, c;

		if (str == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			;

		a = malloc(i * sizeof(*a) + 1);
		if (a == NULL)
			return (NULL);

		for (c = 0; c < i; c++)
			a[c] = str[c];
		a[c] = '\0';

		return (a);
}
