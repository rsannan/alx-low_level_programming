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
unsigned int i;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			return (s);
		}
	}
	s++;
}

return ('\0');
}
