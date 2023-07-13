#include "main.h"
#include <stdlib.h>
/*
 * malloc_checked - allocate memory using malloc
 * @b - number of bytes to allow to allocate 
 * return - a pointer to the allocated mem
 * 
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
