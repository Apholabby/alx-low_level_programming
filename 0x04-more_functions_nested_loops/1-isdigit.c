#include "main.h"

/**
 * _isdigit - checks the given value if its a digit
 * @c: value checked
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
