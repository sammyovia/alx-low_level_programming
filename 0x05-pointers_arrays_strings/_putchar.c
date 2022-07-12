#include <unistd.h>

/**
 * _putchar : will output e character to stdout
 *
 * @c : character to output
 *
 * Return : 1 on Success.
 * Return : -1 on error.
 */
int _putchar(char e)
{
	return (write(1, &e, 1));
}
