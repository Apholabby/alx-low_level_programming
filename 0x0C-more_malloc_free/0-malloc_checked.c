#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memeory and checks its success
 * @b: size of memory to allocate
 * Return: pointer to memory, else if return exit status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(tr);
		exit(98);
	}
	return (ptr);
}
