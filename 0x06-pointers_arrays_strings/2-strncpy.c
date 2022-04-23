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
int k = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[k] != '\0')
{
	k++;
}

if (n < k)
{
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
}

else if (k < n)
{
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < i)
	{
		dest[j] = '\0';
		j++;
	}
}

return (dest);
}
