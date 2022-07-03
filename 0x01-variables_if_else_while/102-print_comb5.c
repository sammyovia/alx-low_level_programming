#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case and uppercase letters
 */
int main(void)
{
	int we1, we2;

	for (we1 = 0; we1 <= 98; we1++)
	{
		for (we2 = we1 + 1; we2 <= 99; we2++)
		{
			putchar((we1 / 10) + '0');
			putchar((we1 % 10) + '0');
			putchar(' ');
			putchar((we2 / 10) + '0');
			putchar((we2 % 10) + '0');

			if (we1 == 98 && we2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
