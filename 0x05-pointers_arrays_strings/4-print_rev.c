#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
		int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
	s--;
	_putchar(*s);
	count--;
	}
	_putchar('\n');
}
