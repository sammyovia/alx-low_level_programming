#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case and uppercase letters
 */

int main(void)
{
	int i = 0; 

	for(i = 10; i < 99; i++)
	{
		putchar(i);
		putchar(',');	
	}		
	
	putchar('\n');	
	
	return (0);
}
