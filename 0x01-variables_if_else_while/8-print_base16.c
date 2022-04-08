#include <stdio.h>
/**
* main - Prints hexidecimal numbers
*
* Return: Always 0
*/

int main(void)
{
int num;
char ch;

for (num = '0'; num <= 9; num++)
{
	putchar(num + '0');
}
for (ch = 'a'; ch < 'g'; ch++ )
{
	putchar(ch);
}
putchar('\n');

return (0);
}
