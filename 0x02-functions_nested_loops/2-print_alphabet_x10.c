#include "main.h"
/**
* print_alphabet_x10 - Prints lowercase alphabet 10x
*
* Return: void
*/

void print_alphabet_x10(void)
{
int num = 0;

while (num < 10)
{
	int alpha = 0;

	while (alpha < 26)
	{
		_putchar(alpha + 'a');
		alpha++;
	}
	_putchar('\n');
	num++;
}
return;
}
