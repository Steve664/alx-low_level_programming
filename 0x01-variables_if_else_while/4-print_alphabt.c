#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints alphabet except for q and e
*
* Return: Always (Success)
*/
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != 'q' || a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
