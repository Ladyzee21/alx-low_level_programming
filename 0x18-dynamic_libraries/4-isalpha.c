#include "main.h"
/**
 * _isalpha - test a character is from the English word.
 * @c: character to be used
 * Return: 1 if the car is an Eglish word, 0 if it is not an English character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
