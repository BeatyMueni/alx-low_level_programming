#include "main.h"

/**
 * _memset - fills memory with a constatnt byte
 * @s: array
 * @b: const byte
 * @n: number of bytes of memory area
 * Return: pointer to memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

