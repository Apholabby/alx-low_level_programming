#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the value to print to stdout
 */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
