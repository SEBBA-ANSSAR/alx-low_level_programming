#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * Description: use prototype char *_memcpy(char *dest, char *src, unsigned int n);
 * @dest: pointer that will receive the copied data
 * @src: pointer which has the info to ne copied
 * @n:amount of times the src information willbe copied to dest
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
