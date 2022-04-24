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
char dec[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char enc[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (ch[i])
{
for (j = 0; j < 52; j++)
{
	if (ch[i] == dec[j])
	{
		ch[i] = enc[j];
		break;
	}
}
i++;
}

return (ch);
}
