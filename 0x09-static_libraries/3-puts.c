#include "main.h"
/**
 * _puts - puts a string to stdout
 * @str: the value to be printed to stdout
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
