#include "main.h"
/**
  * print_square - Prints n squares
  * @s: The number of squares
  *
  */
void print_square(int s)
{
	int x, y;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < s; x++)
		{
			for (y = 0; y < s; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
