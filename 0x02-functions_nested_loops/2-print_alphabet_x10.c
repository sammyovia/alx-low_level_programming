#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets x10
 * main - Entry point
 *
 * Return: x10 a-z lowercase
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
