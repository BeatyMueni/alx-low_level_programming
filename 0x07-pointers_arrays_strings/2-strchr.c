#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: array string
 * @c: character to look for
 * Return: Null if char is not found, pointer to the first occcurence of char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s+1);
		s++;
	}

	return (s + 1);
}
