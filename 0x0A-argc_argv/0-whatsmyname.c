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

while (**argv != '\0')
{
	_putchar(**argv);
	*(argv + 1);
}
_putchar('\n');

return;
}
