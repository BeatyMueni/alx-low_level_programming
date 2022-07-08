#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 1 if uppercase 0 otherwise
 *
 */
int _isupper(int c)
{
	char c;
	c = 'A';

	if (c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
