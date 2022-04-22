#include "main.h"
/**
* string_toupper - converts string to upper
* @ch: string pointer
* Return: ch pointer
*/

char *string_toupper(char *ch)
{
int i = 0;

while (*(ch + i) != '\0')
{
	if (*(ch + i) >= 97 && *(ch + i) <= 122 )
	{
		*(ch + i) = *(ch + i) - 32;
	}
	i++;
}

return (ch);
}
