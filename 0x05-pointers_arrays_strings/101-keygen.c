#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates random valid passwords for the program 101-crackme
 */

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2272; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}