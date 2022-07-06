#include "main.h"
/**
 * main - Entry point
 * print_alphabet: a function that prints alphabets in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int g;

	for (g = 'a'; g <= 'z';	g++)
	{
		_putchar(g);

	}
	_putchar('\n');
}
