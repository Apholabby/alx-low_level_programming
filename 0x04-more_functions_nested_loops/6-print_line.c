#include "main.h"
/**
 * print_line - prints a line across the screen
 * @n: lenght of line
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
