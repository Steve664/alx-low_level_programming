#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints numbers
*
* Return: Always (Success)
*/
int main(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
