#include "main.h"
#include <stdlib.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: -1 if no natural square root, else, return natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - function to help solve the _sqrt_recursion
 * @i: integer to determine square root
 * @j: incrementer
 *
 * Return: -1 if no natural square root, else, return square root
 */

int sqr(int i, int j)
{
	int root;

	root = j * j;
	if (root == i)
		return (j);
	else if (root < i)
		return (sqr(i, j + 1));
	else
		return (-1);
}

