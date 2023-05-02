#include "main.h"

/**
 * a function that reverses a string.
 * s is the input string.
 * Returns nothing
 */
void rev_string(char *s)
{
	int i = 0, n, j;
	char *str, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	str = s;

	for (n = 0; n < (i - 1); n++)
	{
		for (j = n + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
