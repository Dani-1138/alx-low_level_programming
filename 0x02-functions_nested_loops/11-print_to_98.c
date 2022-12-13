#include "main.h"

/**
 * print_to_98 -> code block
 * @n: argument
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n);
	}
	_putchar('\n');
}
