#include <stdio.h>
/**
* main - prints all combination of numbers
*
* Return: Always 0
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
		putchar(',' +' ');
	}
}
putchar('\n');

return (0);
}
