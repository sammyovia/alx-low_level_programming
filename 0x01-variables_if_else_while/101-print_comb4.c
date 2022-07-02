#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case execept e and q */

int main(void)
{
	int e1, e2, e3;

	for(e1 = 0; e1 < 8; e1++)
	{
		for (e2 = e1 + 1; e2 < 9; e2++)
		{
			for(e3 = e2 + 1; e3 < 10; e3++)
			{
				putchar((e1 % 10) + '0');
			putchar((e2 % 10) + '0');
		      putchar((e3 % 10) + '0');
	      if (e1 == 7 && e2 == 8 && e3 == 9)	      
		      continue;
	      putchar(',');
	      putchar(' '); 

	                  }
		}

	
	
	}	

         putchar('\n');	

	return (0);
}
