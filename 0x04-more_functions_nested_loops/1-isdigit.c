#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isdigit(int c);
{
	char digit = '0';
	int is_digit = 0;

	for (; digit <= '0'; digit++)
	{
		if (c == digit)
		{
			is_digit = 1;
			break;
		}
	}

	return (is_digit);
}