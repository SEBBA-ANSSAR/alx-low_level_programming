#include "main.h"
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: the destination string 
 * @src: the source string
 *
 * Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int d_len = 0, i;
	int s_len = 0;

	while (src[s_len] != '\0')
	{
		s_len++;
	}

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	for (i = 0; i <= s_len; i++)
	{
		dest[d_len] = src[i];
		d_len++;
	}
	return (dest);
}
