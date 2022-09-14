#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times
 *  the alphabet, in lowercase,
 *  followed by a newline
 *  Description: Prototype use void print_alphabet_x10(void)
 *  You can only use _putchar twice in your code
 *  Return: 0
*/
void print_alphabet_x10(void)
{
	int s, se;

	se = 0;

	while (se < 10)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		se++;
		_putchar('\n');
	}
}
