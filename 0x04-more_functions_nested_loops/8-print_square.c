#include "main.h"
/**
* print_square - squares a number
* @size: size of the square
*
* Return: void
*/

void print_square(int size)
{
int row, column;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (column = 0; column < size; column++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
return;
}
