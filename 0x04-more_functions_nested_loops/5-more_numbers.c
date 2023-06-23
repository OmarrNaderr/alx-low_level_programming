#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int j;
	int n;
	int d_digit;

	for (j = 0; j < 9; j++)
	{
		for (d_digit = 0; d_digit <= 14; d_digit++)
		{
			n = d_digit;
			if (d_digit > 9)
			{	_putchar (1 + '0');
				n = d_digit % 10;
			}
			_putchar (n + '0');
		}
	_putchar ('\n');
}
