#include "main.h"

/**
 * print_square - a program that prints a square
 * @size: size of square
 * @#: character to print square
 */

void print_square(int size)
{
	int count, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= size; count++)
		{
			_putchar('#');
			for (r = 2; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
