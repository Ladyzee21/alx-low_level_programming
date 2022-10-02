#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i, j, sum;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[1][j] != '\0'; j++)
		{
	if (isdigit(argv[i][j]) == 0)
		{
		printf("Error\n");
		return (-1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
