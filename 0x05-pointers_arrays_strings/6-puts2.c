#include "main.h"

/**
* puts2 - this program prints a string and a new line,
* @str: pointer to the string to print
* Return: void
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
