#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks if integer is a prime number
 * @n: integer
 *
 * Return: 1 if integer is prime, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (pri(n, 2));
}

/**
 * _sqrt - return square root of integer
 * @x: integer
 * @y: incrementer
 *
 * Return: square root of 'x'
 */

int _sqrt(int x, int y)
{
	int root;

	root = y * y;
	if (root >= x)
		return (y);
	else
		return (_sqrt(x, y + 1));
}

/**
 * pri - function to help in recursion
 * @n: integer
 * @i: incrementer divisor
 * Return: 1 if number is prime, otherwise, return 0
 */

int pri(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (_sqrt(n, 1) < i)
		return (1);
	else
		return (pri(n, i + 1));
}

