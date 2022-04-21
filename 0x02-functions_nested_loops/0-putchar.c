#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char ch[9] = "_putchar";

for (i = 0; i < 9; i++)
{
_putchar(ch[i]);

_putchar("\n");

return (0);
}
