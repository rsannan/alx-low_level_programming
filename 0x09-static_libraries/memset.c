#include "main.h"
/**
*_memset - fills memory with constant byte
* @s: memory pointer
* @b: character
* @n: number of characters to be printed
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(s + i) = b;
}

return (s);
}
