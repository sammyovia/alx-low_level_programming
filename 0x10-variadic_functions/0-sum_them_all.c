#include "variadic_functions.h"

/**
 * sum_them_all - function to sum parameters as arguments
 * @n:number to sum
 * Description: sums all parameters given as argument
 *
 * Return: 0 Success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}
	return (0);
}
