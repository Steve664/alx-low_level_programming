#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints alphabet in reverse
*
* Return: Always (Success)
*/
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
