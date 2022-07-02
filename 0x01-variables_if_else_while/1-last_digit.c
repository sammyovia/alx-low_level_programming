#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description: Return function main for rand
 *
 */

int main(void)
{
	int n;
	int digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Your code goes there*/
        digit = n % 10;
	if (digit > 5)
	{	 
		printf("Last digit of %d is %d,and is greater than 5\n", n, digit);
	
	}
	else if (digit == 0)
	{ 
	       
		printf("Last digit of %d is %d, and less than 6 not 0\n", n, digit);
	
	}
	else if (digit <= 6 || ! 0)
	{
		
		printf("Last digit of %d is %d\n, and not 0\n", n, digit);
	
	}	
	return (0);
}
