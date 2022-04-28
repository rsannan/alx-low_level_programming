#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse
* @s: a string
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
if (*(s + 1) == '\0')
{
	_putchar(*s);
}
else
{
	s++;
	_print_rev_recursion(s);
	if (*(s + 1) != '\0')
	{
		_putchar(*s);
	}
	if (*(s - 1) == '\n')
	{
		_putchar('\n');
	}
}
return;
}
