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
int lens1 = 0, lens2 = 0, i = 0, j = 0;
char *s;

if (s1 == NULL && s2 == NULL)
{
	s = malloc(sizeof(*s));
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
if (n < lens2)
	lens2 = n;
s = malloc(sizeof(*s) * (lens1 + lens2 + 1));
if (s == NULL)
	return (NULL);
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
