#include "main.h"
/**
* create_array - dynamically creates an array initialized to c
* @size: size of array
* @c: character intialized array to
*
* Return: s if successful otherwise NULL
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
	return ('\0');
}
unsigned int i;
char *s = (char*)malloc(sizeof(c) * size);

if (s == NULL)
{
	return ('\0');
}
else
{
	for (i = 0; i < size; i++)
	{
		s[i] = _putchar(c);
	}
}
return (s);
}
