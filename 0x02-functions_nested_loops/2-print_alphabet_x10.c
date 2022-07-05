#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

void print_alphabet(void){
	int i;
	char c;
	for (i=0; i<=10; i++){
		c='a';
		while (c<='z'){
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
