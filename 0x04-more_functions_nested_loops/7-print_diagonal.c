#include "main.h"
/**
* print_diagonal - prints \ relative to n
* @n: number of \ to be printed
*
* Return: void
*/

void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (a = 1; a <= n; n++)
	{
	for (b = 1; b < a; b++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n')
	}
}
}
