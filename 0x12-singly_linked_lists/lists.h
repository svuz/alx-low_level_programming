#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @strg: string - (malloc'ed string)
 * @length: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *strg;
	unsigned int length;
	struct list_s *next;
} list_t;

size_t print_linked_list(const list_t *head);
size_t countElements(const list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
