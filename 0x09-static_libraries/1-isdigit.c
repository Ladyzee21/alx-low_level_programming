#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if paramter c represents an digit
 * @c: representing an ASCII character
 * return: 0 or, 1
 */

int _isdigit(int c)
{
	if (c >= 48 &&  c <= 57)
	{
		return (1);
	}
	return (0);
}
