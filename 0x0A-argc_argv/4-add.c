#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if no number is passed to program
 * else return 1 if number contains non-digit symbols and print Error
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *c;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &c, 10);
			if (!*c)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);

			}
		}
	}
	printf("%d\n", sum);
	return (0);

}
