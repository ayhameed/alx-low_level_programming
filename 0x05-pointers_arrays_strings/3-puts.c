#include "main.h"
/**
*_puts - prints a string followed by a new line character
* @str: string
*Returns: returns the string followed by a new line character
*/

void _puts(char *str)
{

while (*str)
_putchar(*str++);

_putchar('\n');
}
