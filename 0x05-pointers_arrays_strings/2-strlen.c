#include "main.h"

/**
 *  _strlen - a function that returns the length of a string.
 *  Description:use a prototype int _strlen(char *s);
 *  @s: input char
 *  Return: length of string
*/
int _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
