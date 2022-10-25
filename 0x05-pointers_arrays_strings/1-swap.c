#include "main.h"

/**
 * swap_int - This program swaps the values of two integers.
 * @a: a parameter
 * @b: another parameter
**/

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
