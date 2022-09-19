#include "main.h"
/**
 * swap_int - prints the swap of a to b and b to a
 * @a: the first variable to swap to b value
 * @b: the second variable to swap to a value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
