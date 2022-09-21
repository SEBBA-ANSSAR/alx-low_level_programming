#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * Description: use prototype void rev_string(char *s)
 * @s: input string to reverse
*/
void rev_string(char *s)
{
	int ini = 0;
	int finish = 0;

	while (s[finish] != 0)
		finish++;
	finish--;

	while (ini < finish)
	{
		t = s[ini];
		s[ini] = s[finish];
		s[finish] = t;
		ini++;
		finish--;
	}
}
