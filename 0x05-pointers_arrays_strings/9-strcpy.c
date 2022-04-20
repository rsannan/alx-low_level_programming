#include "main.h"
/**
* _strcpy  - copies one string to another
* @src: string pointer
* @dest: string pointer
*
* Return: Always pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len = _strlen(src);
char ch[500];
int i, j;

if (len != 0)
{
	for (i = 0; i <= len; i++)
	{
		ch[i] = *(src + (len - (i + 1)));
	}

	for (j = 0; j <= len; j++)
	{
		*(dest + j) = ch[j];
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
