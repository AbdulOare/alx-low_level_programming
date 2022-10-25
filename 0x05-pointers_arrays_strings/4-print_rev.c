#include "main.h"
#include "string.h"

/**
 * print_rev - this program prints a string in reverse.
 * @s: parameter
 * return: Void
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');


}
