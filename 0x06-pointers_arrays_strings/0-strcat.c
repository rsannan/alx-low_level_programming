#include "main.h"
/**
* _strcat - Adds one string to another string
* @dest: string 1
* @src: string 2
*
* Return: Pointer dest
*/

char *_strcat(char *dest, char *src)
{
int lendest, lensrc, i;

lendest = _strlen(dest);
lensrc = _strlen(src);

for (i = 0; i < (lensrc + 1); i++)
{
	*(dest + lendest) = *(src + i);
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
