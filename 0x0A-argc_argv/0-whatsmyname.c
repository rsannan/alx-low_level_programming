#include "main.h"
/**
* main - prints name of program
* @argc: argument count
* @argv: argument strings
*
* Return: void
*/

void main(int argc, char **argv)
{
(void)argc;
int i = 0

while (argv[0][i] != '\0')
{
	_putchar(argv[0][i]);
	i++;
}
_putchar('\n');

return;
}
