#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: pointer int type
 * @b: pointer int type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
