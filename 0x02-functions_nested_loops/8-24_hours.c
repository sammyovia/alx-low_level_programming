#include "main.h"
/** 
 * Return: 24 hour clock
 * Description: prints every minute of the day 24hours round the clock
 */
void jack_bauer(void)
{
	int e, o;

	for (e = 0; e < 24; e++)
	{
		for (o = 0; o < 60; o++){
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
			_putchar(':');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			_putchar('\n');
		}
	}
}
