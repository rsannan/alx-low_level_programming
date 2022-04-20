#include "main.h"
/**
* puts2 - prints odd characters in string
* @str: string pointer
*
* Return: void
*/

void puts2(char *str)
{
int i = 0;

while (*str != '\0')
{
	if (i % 2 != 0)
	{
		_putchar(*str);
	}
	str++;
	i++;
}
_putchar('\n');

return;
}
