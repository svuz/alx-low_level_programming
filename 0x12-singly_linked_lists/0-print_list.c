#include <stdio.h>
#include "lists.h"

/**
 * print_linked_list - prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_linked_list(const list_t *head)
{
	size_t size = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		size++;
	}

	return (size);
}
