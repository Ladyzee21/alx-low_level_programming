#include "main.h"
/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int g, m;

	for (g = 0; g < 24; ++g)
	{
		for (m = 0; m < 60; m++)
	{
		_putchar((g / 10) + '0');
		_putchar((g % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
	}
}
