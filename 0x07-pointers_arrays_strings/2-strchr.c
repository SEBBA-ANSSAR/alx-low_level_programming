#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * Description: use prtotype char *_strchr(char *s, char c);
 * @c: character that needs to be located with in the string
 * @s: pointer that contains the address of the string
 * Return: address of the first occurrence of c
*/
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
