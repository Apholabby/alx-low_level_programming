#include "main.h"
/**
 * print_triangle - print a triangle
 * @size : size of triangle
 *
 */
void print_triangle(int size)
{
/**
 * int i: counter for loop
 * int margin: records the amount of white space
 * int dis: used for size
 * int to_print: used to tell how many # to be printed
 */
	int i, margin, dis, to_print;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	dis = size - 1;
	for (i = 0 ; i < size; i++)
	{
		margin = 0;
		while (margin < (dis - i))
		{
			_putchar(32);
			margin++;
		}
		to_print = size - margin;

		while (to_print > 0)
		{
			_putchar('#');
			t0_print--;
		}
		_putchar('\n');
	}
}
