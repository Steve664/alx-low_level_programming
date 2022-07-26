#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cpy;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	cpy = malloc(sizeof(char) * (++len));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len - 1; i++)
		cpy[i] = str[i];
	return (cpy);
}
