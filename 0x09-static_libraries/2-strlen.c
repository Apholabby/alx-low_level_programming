#include "main.h"
/**
 * _strlen - return the lenght of the string
 * @s: the string
 * Return: the int value of the length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
