#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *  followed by a new line.
 *  Description: use a prototype void print_rev(char *s)
 *  @s: input string
 *  Return: the input 
*/
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

