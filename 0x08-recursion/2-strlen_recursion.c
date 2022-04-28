#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string
*
* Return: len
*/

int _strlen_recursion(char *s)
{
unsigned int len = 0;

if (*s == '\0')
{
	return (len);
}
else
{
	len++;
	s++;
	_strlen_recursion(s);
}
return (len);
}
