#include "main.h"

/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 * Return: void
 */

void print_alphabet(void)

{

	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

