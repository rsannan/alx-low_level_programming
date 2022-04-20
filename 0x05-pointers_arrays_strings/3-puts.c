#include "main.h"
/**
* _puts - prints a string of characters
* @str: string pointer
*
* Return: void
*/

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
_putchar('\n');

return;
}
