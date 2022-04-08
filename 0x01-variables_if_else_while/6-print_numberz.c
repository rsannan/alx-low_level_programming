#include <stdio.h>
/**
* main - prints numbers
*
* Return: always 0
*/

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
	putchar(num + '0');
}

return (0);
}
