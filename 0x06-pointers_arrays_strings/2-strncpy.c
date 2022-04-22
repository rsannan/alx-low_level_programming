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
int lendest, lensrc,i;
if (n > lensrc)
{
	n = (lensrc + 1)
}
for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);

}
}

return (dest);
}

/**
* _strlen - gets length of a string
* @s: string
*
* Return: always len
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
	len++;
	s++;
}

return (len);
}
