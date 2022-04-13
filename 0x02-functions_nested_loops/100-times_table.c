i#include "main.h"
/**
* print_times_table - prints n times table
* @n: times table
*
* Return: Always void
*/

void print_times_table(int n)
{
int row;
int column;
int tens;
int ones;
int product;

for (row = 0; row <= n; row++)
{
	for (column = 0; column <= n; column++)
	{
		product = row * n;
		tens = product / 10;
		ones = product % 10;
		if (column == 0)
		{
			_putchar(0);
		}
		else if (product < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(ones + '0');
		}
else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(tens + '0');
			_putchar(ones + '0');
		}
	}
}
return;
}
