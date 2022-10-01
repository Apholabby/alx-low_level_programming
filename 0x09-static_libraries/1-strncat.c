#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string appended
 * @src: the string appended
 * @n: the number of bytes from src to dest
 * Return: a pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; index < n && src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
