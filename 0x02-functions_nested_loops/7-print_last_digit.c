#include "main.h"

/**
*print_last_digit - prints the last digit of the number
*@n: The number that will be checked
*
*Return:  n
*
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
