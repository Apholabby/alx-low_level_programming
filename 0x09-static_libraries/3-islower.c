#include "main.h"
/**
 * _islower - function checks for lower case character
 * @c: is the int that is used as function argument
 * Return: ends the program
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
