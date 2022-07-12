#include "main.h"
/**
*print_rev - prints a string in reverse
* @s: string to reverse
*
*Description: prints string
*Return: the reversed string
*/

void print_rev(char *s)
{
/* find out array lenght*/
int lenght = 0;

while (s[lenght])
lenght++;

/* print in reverse*/
while (--lenght >= 0)
_putchar(s[lenght]);

_putchar('\n');
}
