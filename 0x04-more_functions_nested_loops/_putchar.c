#include <unistd.h>

/**
 * _putchar : will output c character to stdout
 *
 * @c : character to output
 *
 * Return : 1 on Success.
 * Return : -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
