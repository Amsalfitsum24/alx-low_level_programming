#include "main.h"

/**
 * times_table - prints the times table from 0 - 9.
 *
 * Return: Nothing.
 */

void times_table(void)
{

	int x, y, res, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			res = x * y;
			if (res > 9)
			{
				u = res % 10:
				d = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
