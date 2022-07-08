#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int d;
	long nu = 612852475143;

	for (d = (int) sqrt(nu); d > 2; d++)
	{
		if (nu % d == 0)
		{
			printf("%d\n", d);
			break;
		}
	}
	return (0);
}
