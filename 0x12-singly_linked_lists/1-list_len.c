#include <stdlib.h>
#include "lists.h"

/**
 * This function returns the number of elements in a linked list.
 * 
 * @head A pointer to the head of the list
 * @return The number of elements in the list
 */
size_t countElements(const list_t *head)
{
    size_t count = 0;

    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
