#include <stdio.h>

/**
 * main - a program that prints
 *  all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 * Description:You are not allowed to use any variable of type char
 * You can only use the putchar function
 *  (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
