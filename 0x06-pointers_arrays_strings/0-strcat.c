#include "main.h"
/**
 * _strcat - this function concatenates  @src to @dest
 * @src: source string to append
 * @dest: destination string to be appended on
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index01 = 0;
	int index02 = 0;

	while (dest[index01] != '\0')
	{
		index01++;
	}

	while (src[index02] != '\0')
	{
		dest[index01 + index02] = src[index02];
		index02++;
	}

	dest[index01 + index02] = '\0';

	return (dest);
}
