#include "main.h"
/**
* jack_bauer - print 24 hours
*
* Return: always void
*/

void jack_bauer(void)
{
int a = 0;
while (a < 3)
{
	int b = 0;

	_putchar(a + '0');
	while (b < 10)
	{
		int c = 0;

		if (!((a == 2) && (b > 4)))
		{
			_putchar(b + '0');
			_putchar(':')
			while (c < 7)
			{
				int d = 0;

				_putchar(c + '0');
				while (d < 10)
				{
					_putchar(d + '0');
					d++;
				}
				c++;
			}
		b++
		}
	}
	a++;
}

return;
}
