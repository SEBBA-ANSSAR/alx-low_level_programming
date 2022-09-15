#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Description: s = row, e = column, b = digits of current result
 * Return: times table
*/
void times_table(void)
{
	int s, e, b;

	for (s = 0; s <= 9; s++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (e = 1; e <= 9; e++)
		{
			b = (s * e);
			if ((b / 10) > 0)
			{
				_putchar((b / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((b % 10) + '0');

			if (e < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
