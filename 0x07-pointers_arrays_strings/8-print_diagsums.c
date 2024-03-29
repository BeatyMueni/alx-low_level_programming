#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a diagram
 * @a:  array of type int
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, s;

	i = 0;
	sum = 0;
	s = size * size;
	while (i < s)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < s)
	{
		if (i % (size - 1) == 0 && i != (s - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
