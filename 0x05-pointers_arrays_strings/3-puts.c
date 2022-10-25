#include "main.h"
/**
 *_puts - this prints a string, followed by a new line.
 * @str: the parameter
 * Return: Void
**/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
