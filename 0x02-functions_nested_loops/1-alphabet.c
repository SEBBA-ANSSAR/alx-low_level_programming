#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase
 * followed by new line
 * Description:
 * Prototype: void print_alphabet(void);
 * we can only use _putchar twice in your code
 * Return: 0
*/
void print_alphabet(void)
{
	int s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');

	return (0);
}
