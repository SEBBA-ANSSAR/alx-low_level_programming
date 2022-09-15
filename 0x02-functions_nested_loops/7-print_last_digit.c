#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * Description: prototype int print_last_digit(int)
 * @s: number's last digit result
 * Return: the last digit value n
*/
int print_last_digit(int s)
{
	int n;

	n = (s % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
