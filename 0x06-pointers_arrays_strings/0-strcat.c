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
int i = 0, j= 0;

while (*(dest + i) != '\0')
}
	i++;
}

while (*(src + j) != '\0')
{
	*(dest + i) = *(src + j);
	j++;
	i++;
}
*(dest + i) = '\0';

return (dest);
}
