#include "main.h"

/**
 * _isdigit - This program checks for a digit (0 through 9).
 *  @c: This is the input that is going to be checked
 * Return: 1 if @c is a digit, otherwise 0
**/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
