#include "main.h"
#include <stdio.h>

/**
 * _puts -  a function that prints a string,
 *  followed by a new line, to stdout.
 *  Description: use prototype void _puts(char *str);
 *  @str: string input
 *  Return: string
*/
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
