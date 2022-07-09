#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime factor of the number 612852475143
 * Return: Largest prime factor
 */

int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
	if (num % i == 0)
	{
	printf("%d\n", i);
break;
	}
	}
	return (0);
}

