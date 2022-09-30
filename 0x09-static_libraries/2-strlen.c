#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the pointer
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
