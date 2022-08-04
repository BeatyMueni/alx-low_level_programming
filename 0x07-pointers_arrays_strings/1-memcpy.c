#include "main.h"

/**
 * _memcpy - copies memory 
 * @dest: char array to copy into
 * @src: char array where we copy from
 * @n: number of elements to be copied
 * Return: pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *best;

	best = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (best);
}
