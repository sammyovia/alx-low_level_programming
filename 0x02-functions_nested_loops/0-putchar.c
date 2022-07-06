#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: prints _putchar to the screen
 */
int main(void)
{
	char *ce = "_putchar";

	while (*ce)
	{
		_putchar(*ce);
		ce++;
	}
	_putchar('\n');

	return (0);
}
