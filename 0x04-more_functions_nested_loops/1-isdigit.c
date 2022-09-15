#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * Description: prototype int _isdigit(int c);
 * Returns: 1 if c is a digit
 * @c: a digit 
 * Return: 0
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
