#include <stdio.h>
#include "main.h"

/**
 * print_diagsum -Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, size1; 
	unsigned int total1, total2;

	size1 = 0;
	total1 = 0;
	total2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		total1 = total1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		total2 = total2 + a[n];
	}
	printf("%d, %d\n", total1, total2);
}
