#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: always void
*/

void print_alphabet(void)
{
int num = 0;

while (num < 26)
{
	_putchar(num + 'a');
	num++;
}
_putchar('\n');
return;
}
