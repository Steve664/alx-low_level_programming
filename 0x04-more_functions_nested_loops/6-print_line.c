#include "main.h"
/**
  * print_line - Draws a straight line passed to parameter
  * @n: the number of lines
  *
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

