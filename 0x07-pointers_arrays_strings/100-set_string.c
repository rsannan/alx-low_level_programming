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
unsigned int i;
i = 0;

while (*to)
{
	*(*(s + i)) = *to;
	to++;
	i++;
}
}
