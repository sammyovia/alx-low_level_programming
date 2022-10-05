#include "main.h"
/**
* _puts - prints a string in stdout
* @str: string to print
*
* Return: nothing.
*/
void _puts(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		i++;
		s++;
	}
	_putchar('\n');
}
