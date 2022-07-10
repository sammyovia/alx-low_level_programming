#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers.
 * Return: 0.
 */

int main(void)
{
	unsigned long cnt, a, b, x;

	a = 0;
	b = 1;

	for (cnt = 0; cnt < 50; cnt++)
	{
		x = a + b;
		a = b;
		b = x;
		printf("%lu", x);

		if (cnt == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
