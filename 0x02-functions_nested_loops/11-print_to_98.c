#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 *  followed by a new line.
 *  Descrption:Prototype void print_to_98(int n)
 *  Numbers must be separated by a comma, followed by a space
 *  Numbers should be printed in order
 *  The first printed number should be the number passed to your function
 *  The last printed number should be 98
 *  You are allowed to use the standard library
 * @s: input number
 *  Return: 0
*/
void print_to_98(int s)
{
	if (s < 98)
	{
		while (s <= 98)
		{
			printf("%d", s);
			if (s != 98)
			{
				printf(", ");
			}
			s++;
		}
	}
	else if (s > 98)
	{
		while (s >= 98)
		{
			printf("%d", s);
			if (s != 98)
			{
				printf(", ");
			}
			s--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
