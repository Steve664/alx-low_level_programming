#include "main.h"

/**
*print_sign - prints the sign of the number
*@n: The number that will be checked
*
*Return: 1 if number is greater than 0, 0 if n is zero and -1 if less than 0
*
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
