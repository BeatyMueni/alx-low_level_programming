#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number of chars to copy
 * Return: string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > 1; i++)
		dest[i] = '\0';

	return (dest);
}
