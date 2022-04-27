#include "main.h"
/**
* _strstr - finds first instance of needle in haystack
* @haystack: large string
* @needle: substring
*
* Return: string pointer
*/

char *_strstr(char *haystack, char *needle)
{
unsigned  int i, j, len = 0;

while (needle[len] != '\0')
{
	len++;
}
while (*haystack)
{
	for (i = 0; i < len; i++)
	{
		if (haystack[i] != needle[i])
		{
			break;
		}
		else if (needle[i + 1] == '\0')
		{
			return (haystack);
		}
	}
	haystack++;
}

return ('\0');
}
