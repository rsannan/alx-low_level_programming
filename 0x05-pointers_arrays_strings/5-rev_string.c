#include "main.h"
/**
* rev_string - reverses a string array
* @s: string pointer
*
* Return: void
*/

void rev_string(char *s)
{
int len = _strlen(s);
char ch[500];
int i, j;

if (len != 0)
{
	for (i = 0; i <= (len - 1); i++)
	{
		ch[i] = *(s + (len - (i + 1)));
	}

	for (j = 0; j < (len - 1); j++)
	{
		*(s + j) = ch[j];
	}
}
return;
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
