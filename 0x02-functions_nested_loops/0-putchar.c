#include "main.h"
#include <string.h>
/**
* main - Entry point
*
* Return: nothing, return void
*/

int main (void){
	char text[] = "_putchar";
	int lenght = strlen(text);

	for(int i=0; i<lenght; i++){
		_putchar(text[i]);
	}
	_putchar(lenght);
	return (0);
}
