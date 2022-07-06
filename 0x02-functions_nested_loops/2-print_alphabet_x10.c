#include "main.h"
/**
 * main - Entry point
 *
 * Return: x10 a-z lowercase
 * Description: prints 10x the alphabet
 */
void print_alphabet_x10(void)
{
	int i, dr;

	dr = 0;

	while (dr < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		dr++;
		_putchar('\n');
	}
}
