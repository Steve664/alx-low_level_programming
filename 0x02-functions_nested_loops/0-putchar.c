#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*_putchar - function prints alphabet
*
*/
void _putchar(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
/**
*main - main function
*
*Return: 0 when successful.
*
*/
int main(void)
{
	_putchar();
	return (0);
}
