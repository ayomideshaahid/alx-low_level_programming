#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	while (x++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
