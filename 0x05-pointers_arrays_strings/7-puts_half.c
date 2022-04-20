#include "main.h"
/**
* puts_half - prints seconf half of a string
* @str: string pointer
*
* Return: void
*/

void puts_half(char *str)
{
int len = _strlen(str);
int i;

if (len != 0)
{
	if ((len - 1) % 2 == 0)
	{
		for (i = ((len - 1) / 2) + 1; i < len; i++)
		{
			_putchar(*(str + i));

		}
	}
	else if ((len - 1) % 2 != 0)
	{
		for (i = ((len - 2) / 2) + 1; i < len ; i++)
		{
			_putchar(*(str + i));
		}

	}
}
_putchar('\n');

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
