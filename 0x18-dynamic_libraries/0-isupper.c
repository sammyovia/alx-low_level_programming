#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to be checked
 *
 * Return: 1 if uppercase 0 if not
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

