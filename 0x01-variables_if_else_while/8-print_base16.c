#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case and uppercase letters
 */

int main(void)
{
	char c;
        
        int i;	

	for(i = 0; i < 10; i++)
	{
		putchar(i + '0');     
	}		
        for(c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}	
	putchar('\n');	
	
	return (0);
}
