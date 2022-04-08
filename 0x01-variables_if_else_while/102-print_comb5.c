#include <stdio.h>
/**
* main - Prints double combination of two digits
*
* Return: Always 0
*/

int main(void)
{
int num1;
int num2;
int num3;
int num4;

for (num1 = 0; num1 < 10; num1++)
{
	for (num2 = 0; num2 < 10; num2++)
	{
		for (num3 = 0; num3 < 10; num3++)
		{
			for (num4 = 0; num4 < 10; num4++)
			{
				if (num4 > num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (!((num2 == 8) && (num4 == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n')

return (0);
}
