#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success one
 *
 * Description:prints out the last part of a quote
 *
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-2019\n", 59);

	return (1);
}
