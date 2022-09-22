#include "main.h"

/**
 * _strcmp - a funtion that compares two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	while ((s1[i] = s2[j]) && s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
return (s1[i] - s2[j]);
}
