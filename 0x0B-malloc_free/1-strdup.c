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
len = strlenn(str);
char *s = (char *)malloc(sizeof(char) * len);
if (len == 0)
{
	return (NULL);
}
else if (s == NULL)
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
