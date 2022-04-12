#include "main.h"
/**
* main - prints the alphabet in lowercase
*
* Return: always returns 0
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
