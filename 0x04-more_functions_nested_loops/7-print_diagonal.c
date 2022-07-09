#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times character to be printed
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int count, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			for (s = 1; s <= count; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
