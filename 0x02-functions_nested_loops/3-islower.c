#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * Description: Prototype int _islower(int c);
 * Returns: 1 if c is lowercase
 * Returns: 0 otherwise
*/
int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	else
		return (0);
}
