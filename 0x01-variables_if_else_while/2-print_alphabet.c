#include <stdio.h>
/**
 * main - print a to z in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
		c++;
		}
	putchar('\n');
	return (0);
}
