#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value to include in the range
 * @max: max value to include in the range
 * Return: pointer to new array else, NULL
 */

int *array_range(int min, int max)
{
		int *p, i;

		if (min > max)
			return (NULL);

		p = malloc((max - min + 1) * sizeof(*p));
		if (p == NULL)
			return (NULL);

		for (i = 0; min <= max; i++, min++)
			p[i] = min;

		return (p);
}
