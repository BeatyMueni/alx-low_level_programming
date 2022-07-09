#include "main.h"

/**
 * pint_line - function that draws a straight line in terminal
 * @n: times to print
 * Return: straight line
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

