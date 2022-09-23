#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the string to be compared
 *
 * Return: if str1 < str2, the negative differenceof the unmatched
 * if s1 == s2, 0
 * if s1 > s2, the positive difference of the unmatched
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
