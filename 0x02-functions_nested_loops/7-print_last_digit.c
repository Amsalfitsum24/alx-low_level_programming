#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int n)

{
	int end;
	
	end = n % 10;
	if (end < 0)
	{
		end = end * -1;
	}
	_putchar(end + '0');
	return (end`);
}
