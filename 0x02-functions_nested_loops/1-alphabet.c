#include "main.h"
/**
* main - Entry point
* print_alphabet - print lowercase alphabets
*
* Return: Always 0.
*/

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}

_putchar('\n');
}
