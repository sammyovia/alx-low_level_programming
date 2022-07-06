#include "main.h"
/**
 * jack_bauer - prints every minute of 24 hours
 * Return: 24 hour clock
 * e = hours, o = minutes
 */
void jack_bauer(void)
{
	int e, o;

	for (e = 0; e < 24; e++)
	{
		for (o = 0; o < 60; o++)
		{
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
			_putchar(':');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			_putchar('\n');
		}
	}
}
