#include "main.h"

/**
 * main - prints alphabets in lower case
 * Description: main prints alphabets
 * Return: ends program
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
		_putchar('\n');
}
