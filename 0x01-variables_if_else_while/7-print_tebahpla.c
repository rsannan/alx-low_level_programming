#include <stdio.h>
/**
* main - prints alphabet backwards
*
* Return: Always 0
*/

int main(void)
{
char ch;

for (ch = 'z'; ch <= 'a', ch--)
{
	putchar(ch);
}

return (0);
}
