#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - check the code for Holberton School students.
 * *@s : parameter
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
