#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current_node = head;
    unsigned int count = 0;

    while (current_node != NULL)
    {
        if (count == index)
        {
            return current_node;
        }
        count++;
        current_node = current_node->next;
    }

    /* If we get here, the index was out of bounds */
    return NULL;
}
