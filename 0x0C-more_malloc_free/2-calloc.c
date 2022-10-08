#include "main.h"
/**
 * _calloc - allocates mem for an array of certain num of elements
 * @nmemb: the number of elements
 * @size: the byte size of each array element
 * Return: if nmemb = 0, or func fails - NULL.
 * otherwise - a pointer to the allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
