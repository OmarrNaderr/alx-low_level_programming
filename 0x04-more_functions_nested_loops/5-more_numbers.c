#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int j;
	int n;
	int i;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{	_putchar (i / 10 + '0');
				n = i % 10;
			}
			_putchar (n + '0');
		}
	_putchar ('\n');
}
