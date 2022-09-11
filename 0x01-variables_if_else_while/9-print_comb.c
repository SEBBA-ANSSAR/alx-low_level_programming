#include <stdio.h>

/**
 * main - a program that prints
 * all possible combinations of single-digit numbers.
 * Description:umbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((num % 10) + '0');
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');


	}

	putchar('\n');

	return (0);

}
