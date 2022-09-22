#include <stdio.h>
#include "main.h"
/**
 * reverse_array - this function will reverse an array of integers
 * @a: this is the first parameter pointer
 * @n: second parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tem;
	int b = n;

	if (n % 2 == 0)
	{
	for (i = 0; i < n / 2; i++)
	{
	tem = a[i];
	a[i] = a[b - 1];
	a[b - 1] = tem;
		b--;
	}
	}
	else if (n % 2 == 1)
	{
	for (i = 0; i < (n - 1) / 2; i++)
	{
	tem = a[i];
	a[i] = a[b - 1];
	a[b - 1] = tem;
		b--;
	}
	}
}
