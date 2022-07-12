#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int a, b, c;
	char l;

	for (a = 0; s[a] != '\0'; a++)
		;

	c = a;

	for (a--, b = 0; b < c / 2; a--, b++)
	{
		l = s[b];
		s[b] = s[a];
		s[a] = l;
	}
}
