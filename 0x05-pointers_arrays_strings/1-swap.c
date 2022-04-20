#include "main.h"
/**
* swap_int - interchanges the value of a and b
* @a: first value
* @b: second value
*
* Return: void
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

return;
}
