#include "main.h"
/** 
 * Return: 9 times table, with spaced digits
 * Description: prints the 9 times table from 0
 */
void times_table(void)
{
	int bre, bro, f;

	for (bre = 0; bre <= 9; bre++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (bro = 1; bro <= 9; bro++)
		{
			f = (bre* bro);	
			if ((f / 10) > 0){
				_putchar((f / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((f % 10) + '0');
			if (bro < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
