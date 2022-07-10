#include <stdio.h>
/**
 * main - sum even fibonacci numbersunder 4000000.
 * Return: 0.
 */

int main(void)
{
	unsigned long cnt, a, b, x, sum;

	a = sum = 0;
	b = 1;

	for (cnt = 0; cnt < 50; cnt++)
	{
		x = a + b;
		a = b;
		b = x;

		if (x % 2 == 0 && x < 4000000)
		{
			sum += x;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
