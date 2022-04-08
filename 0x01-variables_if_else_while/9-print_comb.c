#include <stdio.h>
/**
* main -
*
* Return:
*/

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		putchar(',');
	}
}
putchar('\n');

return (0);
}
