#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given task
 * @index: index, starting from 0 of the bit to be set
 *@n: n
 * Return: 1 if it worked, else, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
