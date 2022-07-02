#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Description:prints the alphabets in lower case and uppercase letters
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
