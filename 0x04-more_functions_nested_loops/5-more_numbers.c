#include "main.h"
/**
* more_numbers - prints up to 14
*
* Return: void
*/

void more_numbers(void)
{
int a, b, times, ones, tens, product;

for (times = 1; times <= 10; times++)
{
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = (a * 10) + b;
			ones = product % 10;
			tens = product / 10;
			if (product < 15)
			{
				if (a != 0)
				{
					_putchar(tens + '0');
				}
			_putchar(ones + '0');
			}

		}
	}
_putchar('\n');
}
return;
}
