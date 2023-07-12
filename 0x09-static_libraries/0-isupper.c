#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char Case = 'A';
	int is_upper = 0;

	for (; Case <= 'Z'; Case++)
	{
		if (c == Case)
		{
			is_upper = 1;
			break;
		}
	}

	return (is_upper);
}
