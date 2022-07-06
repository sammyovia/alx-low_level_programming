#include "main.h"
/** 
 * Return: 1 if in is lowercase 0 if not
 * Description: checks for lowercase character
 */
int _isalpha(int d)
{
	if (((d >= 'a') && (d <= 'z')) || ((d >= 'A') && (d <= 'Z')))
		return (1);
	else
		return (0);
}
