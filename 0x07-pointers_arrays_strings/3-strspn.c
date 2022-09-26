#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * Description: use prtotype unsigned int _strspn(char *s, char *accept);
 * @s: pointer that contains the string to be evaluated
 * @accept: pointer that contain sub_string 
 * Return: length of s 
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				k =1;
			}
		}
		if (k == 0)
		{
			break;
		}
	}
	return (i);
}
