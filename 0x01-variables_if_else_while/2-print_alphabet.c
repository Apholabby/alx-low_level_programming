#include <stdio.h>
/**
 * main - Entry point
 * Description: program prints alphabets
 * Return: ends program
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
