#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* strlenn - gets length of string
* @s: string
*
* Return: int i
*/
unsigned int strlenn(char *s)
{
unsigned int i = 0;
while (*s != '\0')
{
	i++;
	s++;
}
return (i);
}
/**
* string_nconcat - adds two strings
* @s1: string 1
* @s2: string 2
* @n: size of string 2
*
* Return: s if success otherwise NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, len, lens2;
if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

len = strlenn(s1) + strlenn(s2);
if (s1 == NULL && s2 == NULL)
{
	s = malloc(1);
	s[0] = '\0';
	return (s);
}
s = malloc(sizeof(*s) * (len + 1));
if (s == NULL)
	return (NULL);
while (i < strlenn(s1))
{
	s[i] = s1[i];
	i++;
}
if (n < strlenn(s2))
	lens2 = n;
else
	lens2 = strlenn(s2);
while (j < lens2)
{
	s[i] = s2[j];
	j++;
	i++;
}
s[i] = '\0';
return (s);
}
