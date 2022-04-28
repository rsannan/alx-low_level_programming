#include "main.h"
/**
* len - returns the length of a string
* @s: string
* @x: length of string
*
* Return: i
*/

int len(char *s, int x)
{
int i;

if (*s == '\0')
{
	return (0);
}
else
{
	s++;
	x++;
	i = x + len(s, x)
}
return (i);
}

/**
* _strlen_recursion - returns the length of a string
* @s: string
*
* Return: sum
*/
int _strlen_recursion(char *s)
{
int sum;

sum = len(s, 0);
return (sum);
}
