#include "main.h" 

/**
 * main - Entry point
 * @ld: number's last digit result
 * Return: prints last digit of a number
 * Description - prints the last of a number
 */
int print_last_digit(int ld)
{
	int oi;	
	
	oi = (ld % 10);
	if (oi < 0)
	{
		oi = (-1 * oi);
	}
	_putchar(oi + '0');
	return (oi);
}
