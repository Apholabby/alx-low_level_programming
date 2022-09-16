#include "main.h"

/**
 * _isupper - function checks for uppercase character
 * @c: int type number
 * Return: 1 if c is uppercaser, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
