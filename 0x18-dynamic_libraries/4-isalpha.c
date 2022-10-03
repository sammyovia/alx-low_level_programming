#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * Return: 1 if d is a letter(lower or uppercase), 0 if not
 * @d: input letter
 *
 */
int _isalpha(int d)
{
	if (((d >= 'a') && (d <= 'z')) || ((d >= 'A') && (d <= 'Z')))
		return (1);
	else
		return (0);
}
