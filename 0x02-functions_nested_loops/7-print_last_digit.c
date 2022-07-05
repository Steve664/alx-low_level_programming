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
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
}
