#include "main.h"
/**
* leet - coverts string to leet code
* @ch: string pointer
*
* Return: char pointer
*/

char *leet(char *ch)
{
int i = 0;
int j;
char letter[11] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'};
char num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

while (ch[i] != '\0')
{
	for (j = 0; j < 10; j++)
	{
		if (ch[i] == letter[j])
		{
			ch[i] = num[j];
		}
	}
	i++;
}

return (ch);
}
