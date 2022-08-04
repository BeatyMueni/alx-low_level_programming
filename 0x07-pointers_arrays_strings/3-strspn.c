#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string array
 * @accept: array to check bytes
 * Return: number of bytes in the initial segment of 's'
 * -which consist only bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{

			c++;
			break;
		}
		b++;
	}
	if (accept[b] == '\0')
		break;
	a++;
	}

	return (c);
}

