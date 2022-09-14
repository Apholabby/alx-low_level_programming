#include "main.h"
/**
 * print_sign - function checks for sign of a number
 * @n: this int is used as function argument
 * Return: ends program
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
