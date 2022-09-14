#include "main.h"
/**
 * _isalpha - function checks if is a letter, upper or lower case
 * @c: is the int used as function argument
 * Return: ends the program
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
