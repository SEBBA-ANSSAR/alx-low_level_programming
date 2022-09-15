#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * Descritpion: prototype int _abs(int)
 * @se: integer input
 * Return: absolute value of se
*/
int _abs(int se)
{
	return (se * ((se > 0) - (se < 0)));
}
