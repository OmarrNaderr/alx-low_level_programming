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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char ch;

	for (ch = 97, ch <= 122, ch++)
		putchar(ch);
		putchar("\n")
	return (0);
}
