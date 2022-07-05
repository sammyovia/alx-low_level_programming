#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints alphabets to lowercase
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
