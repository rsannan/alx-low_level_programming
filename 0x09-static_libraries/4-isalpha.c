#include "main.h"
/**
* _isalpha - checks if a letter is upper or lowercase
*@c: The letter to be checked
*
* Return: 1 if letter is upper or lowercse. o otherwise
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
else
{
	return (0);
}
}
