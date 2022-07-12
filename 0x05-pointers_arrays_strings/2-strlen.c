#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer char type
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
