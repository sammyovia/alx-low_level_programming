#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 * Description: Displays types and sizes.
 */

int main(void)
{
	char achar;
	int aint;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(achar));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(aint));
	printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(alonglong));
	printf("Size of a float : %lu byte(s)\n", (unsigned long)sizeof(afloat));
	return (0);
}

