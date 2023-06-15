#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current_node = head;
    dlistint_t *next_node;

    while (current_node != NULL)
    {
        next_node = current_node->next; /* Save the next node */
        free(current_node); /* Free current node */
        current_node = next_node; /* Move to the next node */
    }
}
