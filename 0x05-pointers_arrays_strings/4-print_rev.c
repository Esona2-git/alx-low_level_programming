#include "main.h"

/**
 * a function that prints a string, in reverse, followed by a new line.
 * s is the input string
 *
 * no return
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
