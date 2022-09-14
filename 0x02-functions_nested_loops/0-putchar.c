#include "main.h"

/**
 * main - program that prints _putchar
 * Description: The program should return 0
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
