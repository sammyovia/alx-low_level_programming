#include <stdio.h>
#define LARGEST 10000000000

/**
* main- main block
* Description: Find and print the first 98 fib numbersstarting with 1 and 2.
* Numbers should be , and space separated.
* Return: 0
*/
int main(void)
{
	unsigned long int f1 = 0, b1 = 1, f2 = 0, b2 = 2;
	unsigned long int hld1, hld2, hld3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (cnt = 2; cnt < 98; cnt++)
	{
		if (b1 + b2 > LARGEST || f2 > 0 || f1 > 0)
		{
			hld1 = (b1 + b2) / LARGEST;
			hld2 = (b1 + b2) % LARGEST;
			hld3 = fr1 + fr2 + hld1;
			f1 = f2, f2 = hld3;
			b1 = b2, b2 = hld2;

			printf("%lu%010lu", f2, b2);
		}
		else
		{
			hld2 = b1 + b2;
			b1 = b2, b2 = hld2;
			printf("%lu", b2);
		}
		if (cnt != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
