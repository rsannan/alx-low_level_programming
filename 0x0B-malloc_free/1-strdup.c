#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* strlenn - gets length of string
* @s: string
*
* Return: int i
*/
int strlenn(char *s)
{
int i = 0;
while (*s)
{
	i++;
	s++;
}
return (i);
}
/**
* _strdup - copies a string to new location
* @str: string
*
* Return: s if successfull NULL otherwise
*/
char *_strdup(char *str)
{
int len, i;
char *s;

len = strlenn(str);
s = (char *)malloc(sizeof(char) * (len + 1));
if (len == 0)
{
	return ('\0');
}
else if (s == NULL || str == NULL)
{
	return (NULL);
}
else
{
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
}
return (s);
}
