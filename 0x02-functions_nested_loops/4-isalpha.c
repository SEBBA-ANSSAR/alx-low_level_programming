#include "main.h"

/**
 *  _isalpha - a function that checks for alphabetic character.
 *  Description:Prototype int _isalpha(int s)
 *  @s: single letter input
 *  Returns 1 if s is a letter, lowercase or uppercase
 *  Return: 0 
*/
int _isalpha(int s)
{
	if (((s >= 'a') && (s <= 'z')) || ((s >= 'A') && (s <= 'Z')))
		return (1);
	else
		return (0);
}
