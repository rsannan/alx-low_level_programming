#include "main.h"
/**
* set_string - sets the value of a pointer to a char
* @s: pointer to a pointer
* @to: pointer
*
* Return: void
*/

void set_string(char **s, char *to)
{
unsigned int i, j = 0, len = 0;

while (to[j] != '\0')
{
	len++;
	j++;
}

for (i = 0; i < len; i++)
{
	*(*(s + i)) = *(to + i);
}

return;
}
