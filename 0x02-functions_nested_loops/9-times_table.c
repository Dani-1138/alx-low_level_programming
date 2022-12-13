#include "main.h"

/**
 * times_table -> code block
 * Return: always 0 (success)
 */

void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{

			prod = num * mul;

			if ((mul / 10) == 0)
			{
				if (mul == 0)
				{
					_putchar('0');
				}
				if (mul != 0)
				{
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}
				if (mul < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '+');
				if (mul < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
