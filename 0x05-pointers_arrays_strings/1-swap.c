#include "main.h"

/**
 * swap_int - swaps the values of i and j (integers)
 * @i: first swap int
 * @j: second swap int
 *
 * Return: nothing
 */
void swap_int(int *i, int *j)
{
	int c;

	c = *i;
	*i = *j;
	*j = c;
}
