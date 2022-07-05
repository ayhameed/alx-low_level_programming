#include "main.h"

/**
* _isalpha - Checks for letter, lowercase, uppercase
* @c: The character to be checked
*
* Return: 1 if c is letter,  lowercase or uppercase, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
