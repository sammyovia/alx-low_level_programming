#include "main.h" 

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description: prints _putchar followed by a new line 
 */
int main(void)
{
	char *ce = "cahar";	
	while (*ce)
	{
		_putchar(*ce);
		ce++;
	}
	putchar('\n');

	return (0);
}
