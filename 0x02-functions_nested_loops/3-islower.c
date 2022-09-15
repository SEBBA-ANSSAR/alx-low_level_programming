#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * Description: Prototype int _islower(int s);
 * @s: single letter input
 * Return 1 if s is lowercase
 * Return: 0
*/
int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	else
		return (0);
}
