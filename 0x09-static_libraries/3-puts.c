#include "main.h"
/**
* _puts - prints a string of characters
* @str: string pointer
*
* Return: void
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

