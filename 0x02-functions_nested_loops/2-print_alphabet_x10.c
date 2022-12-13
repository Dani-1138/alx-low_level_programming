#include "main.h"

/**
 * print_alphabet_x10 - entry block
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n = 'z';

	while (n <= 'z')
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(n);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
