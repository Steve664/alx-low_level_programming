#include "main.h"
/**
*_islower - checks if character is lowercase or not
*
*Return: ! if character is lowercase 0 if uppercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
