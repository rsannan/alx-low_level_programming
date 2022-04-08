#include <stdio.h>
/**
* main - Prints combination of two digits
*
* Return: Always o
*/

int main(void)
{
int num;
int num1;

for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	for (num1 = 1; num1 <= 9; num1++)
	{
		putchar(num1 + '0');
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
