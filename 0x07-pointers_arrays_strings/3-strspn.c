#include "main.h"
/**
* _strspn -Returns the number of bytes in the initial segment of s
* @s: character pointer
* @accept: character pointer
* Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int len = 0;

while (s[i] != '\0')
{
	for (j = 0; j != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			len++;
			break;
		}
	}
	if (accept[j] == '\0')
	{
		break;
	}
	i++;
}
if (accept[i] == '\0')
{
	return ('\0');
}
return (len);
}
