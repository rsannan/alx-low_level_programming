#include "main.h"
/**
* print_triangle - prints a triangle
* @size: size of triangle
*
* Return: void
*/

void print_triangle(int size)
{
int row, space, hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
	for (space = (size - row); space > 0; space--)
	{
		_putchar(' ');
	}

	for (hash = (size - row); hash < size; hash++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
return;
}
