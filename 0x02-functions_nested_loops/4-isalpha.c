#include "main.h"
/**
*_isalpha - checks if character is alphabetic or not
*@c: character that is to be checked
*
*Return: ! if character is alphabetic else 0 if not
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
