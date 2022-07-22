#include "main.h"
/**
* _puts - prints a string in stdout
* @str: string to print
*
* Return: nothing.
*/
void _puts(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
