#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a funtion that compares two strings
 * @s1: string one pointer
 * @s2: string two pointer
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int m, n;

	n = 0;

	while ((s1[n] = s2[n]) && s1[n] != '\0' && s2[n] != '\0')
	{
		m++;
	}
	m = s1[n] - s2[n];
	return (m);
}
