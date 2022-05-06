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
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: argument string
*
* Return: s
*/
char *argstostr(int ac, char **av)
{
int i;
unsigned int  l, j = 0, tlen = 0, slen;
char *s;

if (ac == 0 || av == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	tlen = tlen + strlenn(av[i]);
}
s = (char *)malloc(sizeof(char) * (tlen + 10));
if (s == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	l = 0;
	slen = strlenn(av[i]);
	while (l < slen)
	{
		s[j] = av[i][l];
		l++;
		j++;
	}
	s[j] = '\n';
	j++;
}
return (s);
}
