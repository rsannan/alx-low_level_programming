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
int i;
int len = _strlen(dest);

while (*(src + i) != '\0')
{
	*(dest + len) = *(src + i);
	i++;
}
*(dest + i) = '\0';

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
