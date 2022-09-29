#include "main.h"

/**
 * _strlen_recursion - a function that returns
 * the length of a string.
 * Description : use a prototype
 * int _strlen_recursion(char *s);
 * @s: string to calculate the length 
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recrusion(s + 1));
}
