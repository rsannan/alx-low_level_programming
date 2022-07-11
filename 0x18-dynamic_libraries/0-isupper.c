#include "main.h"
/**
* _isupper - checks if letter is uppercase
* @c: letter to be checked
*
* Return: 1 if uppercase 0 otherwise
*/

int _isupper(int c)
{
if ((c < 91) && (c > 64))
{
return (1);
}
else
{
return (0);
}
}
