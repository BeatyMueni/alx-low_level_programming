#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: NULL if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
		int *p;
		unsigned int i;

		if (nmemb <= 0 || size <= 0)
			return (NULL);

		p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			p[i] = 0;

		return (p);
}
