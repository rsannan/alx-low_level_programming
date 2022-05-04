#include "main.h"
/**
* main - prints all the argumnets of a program
* @argc: argument count
* @argv: argument string
*
* Return: void
*/

int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
int j = 0;
while (argv[i][j] != '\0')
{
	_putchar(argv[i][j]);
	j++;
}
_putchar('\n');
}
return (0);
}
