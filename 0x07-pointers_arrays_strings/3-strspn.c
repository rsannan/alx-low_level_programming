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

while (s[i] != '\0')
{
	if (s[i] == accept[i])
	{
		i++;
	}
	else
	{
		break;
	}
}

return (i);
}
