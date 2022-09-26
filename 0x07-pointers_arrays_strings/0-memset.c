#include "main.h"

/**
 * *_memset -  a function that fills memory with a constant byte.
 * Description: use prototype char *_memset(char *s, char b, unsigned int n);
 * @s: pointer that has the address of the memory to fill
 * @n: amount of times the byte will be written into the memory
 * @b: constant byte that will be written into the momory
 * Return: address of the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
