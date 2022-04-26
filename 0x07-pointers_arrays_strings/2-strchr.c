#include "main.h"
/**
* _strchr - prints first occurance of c
* @s: string pointer
* @c: character
*
* Return: s
*/

char *_strchr(char *s, char c)
{
unsigned int i = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	i++;
}
if (s[i] == '\0')
{
	return (&s[i]);
}
else
{
	return (&s[i + 1]);
}
}
