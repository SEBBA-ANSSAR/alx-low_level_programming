#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * Description : use a prototype int _strlen_recursion(char *s);
 * @s: a string to be measured 
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}