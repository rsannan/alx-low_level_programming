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
* str_concat - joins two strings in a third string
* @s1: first string
* @s2: second string
*
* Return: s if successful NULL otherwise
*/
char *str_concat(char *s1, char *s2)
{
int lens1 = 0, lens2 = 0, i = 0, j = 0;
char *s;

if (s1 == NULL && s2 == NULL)
{
	s = (char *)malloc(sizeof(char));
	s[0] = '\0';
}
else if (s1 == NULL)
{
	lens2 = strlenn(s2);
}
else if (s2 == NULL)
{
	lens1 = strlenn(s1);
}
else
{
	lens1 = strlenn(s1);
	lens2 = strlenn(s2);
}

s = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
if (s == NULL)
{
return (NULL);
}
while (i < lens1)
{
	s[i] = s1[i];
	i++;
}
while (j < lens2)
{
	s[i] = s2[j];
	j++;
	i++;
}
s[i] = '\0';
return (s);
}
