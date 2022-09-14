#include "main.h"
/**
 * main - prints the putchar
 * Return: ends the program
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	-putchar('\n');

	return (0);
}
