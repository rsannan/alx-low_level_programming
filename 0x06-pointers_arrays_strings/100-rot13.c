#include "main.h"
/**
* rot13 - encodes string to rot13
* @ch: string pointer
*
* Return: ch
*/

char *rot13(char *ch)
{
int i = 0;
int j;
char dec[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char enc[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (ch[i] != '\0')
{
for (j = 0; j < 52; j++)
{
	if (ch[i] == dec[j])
	{
		ch[i] = enc[j];
	}
}
i++;
}

return (ch);
}
