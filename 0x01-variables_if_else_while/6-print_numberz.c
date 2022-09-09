#include <stdio.h>
/**
 * main - all single digit numbers starting from 0 of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		i++;
	}
	putchar('\n');
	return (0);
}
