#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * Description: use prototype void set_string(char **s, char *to);
 * @to: pointer thathas the value of the char
 * @s: double pointer that will be set to a char
 * Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
