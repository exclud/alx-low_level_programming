#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node, starting at 0
 *
 * Return: a pointer to the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current_node = head;
unsigned int i = 0;

while (current_node != NULL)
{
if (i == index)
return current_node;

i++;
current_node = current_node->next;
}

return NULL;
}
