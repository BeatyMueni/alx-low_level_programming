#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string
 * Return: 'str'
 */

char *cap_string(char *str)
{
	int i, c;
	int a;
	char sep[] = ",;.!?(){}\n\t" "";

	for (i = 0, a = 0; str[i] != '\0'; i++)
	{

		if (str[0] > 96 && str[0] < 123)
		       a = 1;
		for (c = 0; sep[c] != '\0'; c++)
		{
		if (sep[c] == str[i])
			a = 1;
		}
	if (a)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			a = 0;
		}
		else if (str[i] > 64 && str[i] < 91)
			a = 0;
		else if (str[i] > 47 && str[i] < 58)
			a = 0;
	}
	}

	return (str);
}

