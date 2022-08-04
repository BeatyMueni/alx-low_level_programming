#include "main.h"

/**
 * _strpbrk() - locates first occurence in the string 's' in string 'accept'
 * @s: string
 * @accept: string
 * Return: pointer to the byte 's' that matches one of the bytes in 'accept'
 * - or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *c;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				c = &s[i];
				return (c);
			}
			j++;

		}
		i++;

	}

	return (0);
}
