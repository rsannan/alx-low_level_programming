#include "main.h"
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
