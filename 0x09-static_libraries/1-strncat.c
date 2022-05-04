#include "main.h"
/**
* _strncat - Adds one string to another string
* @dest: string 1
* @src: string 2
* @n: number of bytes to be used
*
* Return: Pointer dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[j] != '\0')
{
	if (j < n)
	{
		dest[i] = src[j];
	}
	i++;
	j++;
}
if (j < n)
{
dest[i] = '\0';
}
return (dest);
}
