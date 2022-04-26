#include "main.h"
/**
* _strspn -Returns the number of bytes in the initial segment of s
* @s: character pointer
* @accept: character pointer
* Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int len = 0;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			len++;
			break;
		}
		else if (accepted[i + 1]  == '\0')
		{
			return (len);
		}
	}
	s++;
}

return (len);
}
