#include <stdio.h>
/**
 * main - entry point, prints number of arg starting from 0
 * @argc: count
 * @argv: argument string
 * Return: int count of argument
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc -1);
}
