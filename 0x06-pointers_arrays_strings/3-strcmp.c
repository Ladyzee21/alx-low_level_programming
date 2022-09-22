#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: m
 */

int _strcmp(char *s1, char *s2)
{
	int m, n;

	n = 0;

	while ((s1[n] == s2[n]) && s1[n] != '\0' && s2[n] != '\0')
	{
		n++;
	}
	m = s1[n] - s2[n];
	return (m);
}
