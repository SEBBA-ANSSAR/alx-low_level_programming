#include <stdio.h>

/**
 * main - a program that prints
 *all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Description:All your code should be in the main function
 * Return: 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	printf("\n");

	return (0);
}
