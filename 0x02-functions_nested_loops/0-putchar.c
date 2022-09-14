#include "main.h"

/**
 * main - a program that prints _putchar,
 *  followed by a new line.
 *  Description:The program should return 0
 *  Return: 0
*/
int main(void)
{
	char *se = "_putchar";

	while (*se)
	{
		_putchar(*se);
		se++;
	}
	_putchar('\n');

	return (0);
}
