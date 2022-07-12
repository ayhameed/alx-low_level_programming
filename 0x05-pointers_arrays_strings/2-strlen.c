#include "main.h"
/**
 *_strlen - returns string length
 * @s: string
 *Return: returns the lenght of the string;
 */
int _strlen(char *s)
{
int len, icr;
icr = 0;
for (len = 0; s[len] != '\0'; len++)
icr++;

return (icr);
}
