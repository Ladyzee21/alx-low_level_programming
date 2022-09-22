#include "main.h"
/**
 * reverse_array - this function will reverse an array of integers
 * @a: this is the first parameter pointer
 * @n: second parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
		i++;
		j++;
	}

}
