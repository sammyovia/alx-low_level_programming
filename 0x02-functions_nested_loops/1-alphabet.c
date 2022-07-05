#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:function to print alphabets in lowercase
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
