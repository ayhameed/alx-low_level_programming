#include "main.h"
/**
*swap_int - swaps two integers
*@a: parameter a
*@b: parameter b
*Return : nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
