#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case and uppercase letters
 */

int main(void)
{
	int num; 

	for(num = 0; num <= 9; num++)
	{
		printf("%d", num);     
	}		
	
	putchar('\n');	
	
	return (0);
}
