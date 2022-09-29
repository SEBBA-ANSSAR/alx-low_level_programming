#include "main.h"

/**
 * factorial - a function that  returns the factorial of a given number
 * Description: use a prototype int factorial(int n);
 * @n: a number to find the factorial.
 * Return: factorial of n.
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
