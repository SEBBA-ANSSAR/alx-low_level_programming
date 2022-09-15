#include "main.h"

/**
 * print_most_numbers -  a function that prints the numbers, from 0 to 9
 * followed by newline
 * Return: 0
*/
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
