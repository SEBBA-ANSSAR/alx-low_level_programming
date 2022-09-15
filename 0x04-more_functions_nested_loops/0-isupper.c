#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * Description: prototype int _isupper(int c);
 * Returns 1 if c is uppercase
 * Return: 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
