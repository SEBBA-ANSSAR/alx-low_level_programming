#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * Description: use prototype void print_diagsums(int *a, int size);
 * @size: size of the square matrix
 * @a: pointer that contains the address of the beginning of the matrix
 * Return: nothing
*/
void print_diadsums(int *a, int size)
{
	int i;
	int j;
	int dia_1 = 0;
	int dia_2 = 0;

	for (i = 0; i < size * size; i = i + (size +1))
	{
		dia_1 = dia_1 + a[i];
	}
	for (j = size - 1; j < size * size -1; j = j + (size -1))
	{
		dia_2 = dia_2 + a[j];
	}
	printf("%d, %d\n", dia_1, dia_2);
}
