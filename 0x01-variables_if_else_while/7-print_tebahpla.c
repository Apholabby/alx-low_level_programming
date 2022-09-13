#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets
 * Return: end program
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
