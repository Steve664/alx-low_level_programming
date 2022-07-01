#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, s, d, f;

	for (a = 48; a <= 57; a++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (d = 48; d <= 57; d++)
			{
				for (f = 48; f <= 57; f++)
				{
					if (((d + f) > (a + s) &&  d >= a) || a < d)
					{
						putchar(a);
						putchar(s);
						putchar(' ');
						putchar(d);
						putchar(f);

					if (a + s + d + f == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
