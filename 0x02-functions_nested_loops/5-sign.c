#include "main.h"
/**
* print_sign - Checks for the sign of a number
* @n: The character to be checked
* Return: 1 if n>0 and prints +, 0 if n=0 and prints 0, otherwise -1 and prints -
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
		printf("+");
	else if (n == 0)
		return (0);
		printf("0");
	else
		return (-1);
		printf("-1");
}
