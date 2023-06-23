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
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{	_putchar (1 + '0');
				d_digit = (n % 10);
				_putchar (d_digit);
			}
			_putchar (n + '0');
		}
	_putchar ('\n');
}
