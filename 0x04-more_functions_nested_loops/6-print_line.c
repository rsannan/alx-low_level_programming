#include "main.h"
/**
* print_line - prints _ relative to n
* @n: number of _ to be printed
*
* Return: void
*/

void print_line(int n)
{
int a;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
return;
}
