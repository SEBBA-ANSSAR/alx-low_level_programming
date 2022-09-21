#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * Description: use prototype void puts_half(char *str);
 * The function should print the second half of the string
 *  @str: input string to print
*/
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
