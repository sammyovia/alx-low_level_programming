#include "main.h"

/**
 * _isdigit - checks for digit characters 
 * @c: character to be checked
 *
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
	_putchar('\n');
}

