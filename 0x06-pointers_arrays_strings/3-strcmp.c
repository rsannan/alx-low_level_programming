#include "main.h"
/**
* _strcmp - compares strings
* @s1: first string
* @s2: second string
*
* Return: result
*/

int _strcmp(char *s1, char *s2)
{
int i = 0; 
int result = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
		break;
	}
	else if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
	{
		result = s1[i + 1] - s2[i + 1];
	}
	i++;
}

return (result);
}
