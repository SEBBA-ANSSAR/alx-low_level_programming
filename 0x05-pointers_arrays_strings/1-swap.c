#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * Description: prototype void swep_int(int *a, int *b)
 * @a: input 1
 * @b: input 2
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
