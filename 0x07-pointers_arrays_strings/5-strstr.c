#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * Description: use prototype char *_strstr(char *haystack, char *needle);
 * @haystack: pointer that contains the address of the string to be evaluated
 * @needle: pointer that contains the string to evaluate @haystack
 * Return: address of the located string in @haystack if no substring && return NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int j, a, s;
	int i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (haystack[i] != 0)
	{
		j = 0;
		a = i;
		while (needle[j] != 0)
		{
			if (needle[j] == haystack[a])
			{
				s = 1;
			}
			else
			{
				s = 0;
				break;
			}
			j++;
			a++;
		}
		if (s == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
