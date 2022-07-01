#include <stdio.h>

/**
  * main - Prints combinations
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, s, d;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (s = '0' ; s <= '9' ; s++)
		{
			for (d = '0' ; d <= '9' ; d++)
			{
				if (a < s && s < d)
				{
					putchar(a);
					putchar(s);
					putchar(d);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
