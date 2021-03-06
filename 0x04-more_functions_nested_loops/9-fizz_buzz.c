#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * checks for multiples of 3 and 5
 * prints Fizz for multiples of 3
 * prints Buzz for multiples of 5
 * prints FizzBuzz for multiples of both 3 and 5
 * @i: variable
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

