#include "main.h"
/**
* cap_string - capitalizes first letter of every word
* @ch: string pointer
*
* Return: ch
*/

char *cap_string(char *ch)
{
int i = 0;

while (*(ch + i) != '\0')
{
	switch (ch[i])
	{
	case ' ':
	case '	':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		if (ch[i + 1] <= 122 && ch[i + 1] >= 97)
		{
			ch[i + 1] = ch[i + 1] - 32;
			break;
		}
	}
	i++;
}
return (ch);
}
