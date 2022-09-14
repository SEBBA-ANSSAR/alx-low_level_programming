#include "main.h"

/**
 * main - program that prints _putchar
 * Description:a program that prints _putchar
 * use the while loop
 * The program should return 0
 * Retutn: 0
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
