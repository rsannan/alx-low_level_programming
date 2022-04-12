#include "main.h"
/**
* print_last_digit - prints last number
* @num: number of which the last number id obtained
*
* Return: Always result
*/

int print_last_digit(int num)
{
int result;

result = (_abs(num) % 10);
_putchar(result + '0');

return (result);
}
