#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: int type pointer array
 * @n: number of elements to be printed
 * numbers separsted by comma, followed by space
 * Display numbers in the same order as stored in the array
 * use printf
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}

	printf("\n");
}
