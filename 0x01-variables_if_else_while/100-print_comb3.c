#include <stdio.h>
/**
* main - Prints combination of two digits
*
* Return: Always o
*/

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	for (num = 1; num <= 9; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
