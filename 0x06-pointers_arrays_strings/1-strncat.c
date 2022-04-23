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
int i;

while (*(src + i) != )
for (i = 0; i < (lensrc + 1); i++)
{
	if (i <= n)
	{
		*(dest + lendest) = *(src + i);
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
