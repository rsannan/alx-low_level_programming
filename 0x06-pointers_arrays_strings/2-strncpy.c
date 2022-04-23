#include "main.h"
/**
* _strncpy - Adds one string to another string
* @dest: string 1
* @src: string 2
* @n: number of bytes to be used
*
* Return: Pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}

if(i > n)
{
	while (j < i)
	{
		if (j < n)
		{
			dest[j] = src[j];
			j++;
		}
		else
		{
			dest[j] = '\0';
			j++;
		}
	}
}
else
{
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
}

return (dest);
}
