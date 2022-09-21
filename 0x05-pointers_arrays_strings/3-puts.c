#include "main.h"

/**
 * _puts -  a function that prints a string,
 *  followed by a new line, to stdout.
 *  Description: use prototype void _puts(char *str);
 *  @str: string input
 *  Return: string
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
