#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints alphabet in both lower and uppercase
*
* Return: Always (Success)
*/
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
