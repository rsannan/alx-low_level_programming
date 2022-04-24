#include "main.h"
/**
* print_number - prints an integer
* @n: integer to be printed
*
* Return: void
*/

void print_number(int n)
{
unsigned int i;

i = n;
if (n < 0)
{
	_putchar('-');
	i = -n;
}

if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
