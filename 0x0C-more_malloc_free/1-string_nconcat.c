#include "main"
#include <stdlib.h>
#include <stddef.h>
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
unsigned int len = n, index;
char *s;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (index = 0; s1[index]; index++)
	len++;

s = malloc(sizeof(*s) * (len + 1));
if (s == NULL)
	return (NULL);
len = 0;

for (index = 0; s1[index]; index++)
{
	s[len] = s1[index];
	len++;
}

for (index = 0; s2[index] && index < n; index++)
{
	s[len] = s2[index];
	len++;
}
s[len] = '\0';
return (s);
}
