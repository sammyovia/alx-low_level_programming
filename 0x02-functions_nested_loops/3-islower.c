#include "main.h"
/** 
 * Return: 1 if in is lowercase 0 if not
 * Description: checks for lowercase character
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
