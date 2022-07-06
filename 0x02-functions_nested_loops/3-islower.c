#include "main.h"
/**
 * _islower - prints alphsbet in lowercase.
 * main - function to check for lowercase
 * Return: 1 if in is lowercase 0 if not
 * @l: single letter input
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
