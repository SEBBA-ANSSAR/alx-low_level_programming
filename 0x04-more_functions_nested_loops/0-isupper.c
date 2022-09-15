#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character
 * Description: prototype int _isupper(int c);
 * Returns 1 if c is uppercase
 * Return: 0
*/
int _isupper(int c)
{
	
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
