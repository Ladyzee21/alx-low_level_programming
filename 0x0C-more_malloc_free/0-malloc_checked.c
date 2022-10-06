#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - the prototype function for the program
 * @b: variable
 * Return: 0 if successful
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

	exit(98);
	return (ptr);
}
