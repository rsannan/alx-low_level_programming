#include "main.h"
/**
* _strpbrk - locates the first occurance of accept in s
* @s: string pointer
* @accept: second string
*
* Return: s
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
char *p;
while (s[i] != '\0')
{
	for (j = 0; j != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			p = &s[i];
			return (p);
		}
	}
	i++;
}
if (*accept = '\0')
{
	return (&s[i]);
}
return ('\0');
}
