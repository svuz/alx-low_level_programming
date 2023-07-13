#include "main.h"
#include <stddef.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
        unsigned int* ptr;
        ptr = (unsigned int*)malloc(b * sizeof(unsigned int));
        if( ptr == NULL)
        {
                exit(98);
        }
        else
        {
                return ptr;
        }
}
