#include "main.h"
/**
 * _islower - test a lowercase letter from the ENglish alphabetd
 * @c: character to test
 * return: 1 if it is a lowercase, and return 0 if it is not a lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
