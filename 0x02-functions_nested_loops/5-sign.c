#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * Description:Prototype int print_sign(int s)
 * @s: number input
 * Returns 1 and prints + if s is greater than zero
 * Return: 0 and prints 0 if s is zero
 * Returns -1 and prints - if s is less than zero
*/
int print_sign(int s)
{
	if (s > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
