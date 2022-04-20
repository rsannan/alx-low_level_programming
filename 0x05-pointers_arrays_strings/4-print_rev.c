#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string pointer
*
* Return: void
*/

void print_rev(char *s)
{
int len = _strlen(s);

while (len >= 0)
{
	s = s + len;
	_putchar(*s);
	len--;
}
_putchar('\n');

return;
}

/**
* _strlen - gets length of a string
* @s: string
*
* Return: always len
*/
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
	len++;
	s++;
}

return (len);
}
