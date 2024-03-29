#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * Description: if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 * @b: unsigned integer memory size to allocate
 * Return: pointer to the allocated memeory
 */
void *malloc_checked(unsigned int b)
{
		void *p;

		p = malloc(b);
		if (p == NULL)
			exit(98);

		return (p);
}

