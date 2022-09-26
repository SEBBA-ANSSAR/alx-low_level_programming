#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * Descriptin: use prototype void print_chessboard(char (*a)[8]);
 * @a: pointer to matrix containing the chessboard
 * Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int s;
	int e;

	for (s = 0; s < 8; s++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[s][e]);
		}
		_putchar(10);
	}
}
