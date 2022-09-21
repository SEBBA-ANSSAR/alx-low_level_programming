#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *  followed by a new line.
 *  Description: use a prototype void print_rev(char *s)
 *  @s: input string
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
