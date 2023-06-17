#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char alph;

	for (i = '0'; i <= '9'; i++)
	{	putchar(i);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{	putchar(alph);
	}
	putchar('\n');

	return (0);
}
