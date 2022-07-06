#include "main.h"
/**
 * _abs - derives the absolute value of an integer
 * @ol: takes integer input
 * Return: absolute value of ol
 */
int _abs(int ol)
{
	return (ol * ((ol > 0) - (ol < 0)));
}
