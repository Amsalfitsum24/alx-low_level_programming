#include "main.h"
#include <stdlib.h>

/**
 * _strdup - rturns
 * space
 * passed
 * @str: pointer
 *
 * Return: NULL
 * pointer
 * NULL
 */

char *_strdup(char *str)
{
	int i = 0, j, k = 0;
	char *newStr = NULL;

	while (str[k] != '\0')
	{
		i++;
		k++;
	}

	newStr = malloc(sizeof(char) * (i + 1));

	/*check if malloc was succeffful*/
	if (str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newStr[j] = str[j];

	return (newStr);
}
