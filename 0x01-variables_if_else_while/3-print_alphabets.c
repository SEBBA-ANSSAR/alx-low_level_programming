#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 *  followed by a new line
 * Description:You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 *  All your code should be in the main function
 *  You can only use putchar three times in your code
 *  Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');


	return (0);
	
}
