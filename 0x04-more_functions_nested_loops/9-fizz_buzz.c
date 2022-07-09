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
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if(i == 100)
		{
			printf("%s", b);
		}
		else if	((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fb);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return (0);
}
