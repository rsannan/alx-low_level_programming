#include "main.h"
/**
* jack_bauer - print 24 hours
*
* Return: always void
*/

void jack_bauer(void)
{
int a;
int b;
int c;
int d;

for (a = 0; a < 2; a++)
{
	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 7; c++)
		{
			for (d = 0; d < 10; d++)
			{
				if (!((a == 2) && (b >= 4)))
				{
					if (!((a == 2) && (b == 3) && (c ==6)))
					{
						if (!((c == 6) && (d > 0)))
						{
							_putchar(a + '0');
							_putchar(b + '0');
							_putchar(':');
							_putchar(c + '0');
							_putchar(d + '0');
							_putchar('\n');
						}
					}
				}
			}
		}
	}
}

return;
}
