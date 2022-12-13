#include "main.h"

/**
 * print_last_digit -> return last digit
 * @n: numerical parameter
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(l);

	return (l);
}
