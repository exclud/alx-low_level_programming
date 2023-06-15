#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node;
    unsigned int i;

    if (*head == NULL)
    {
        return -1;
    }

    /* Point to the head of the list */
    current_node = *head;

    /* If deleting the head of the list */
    if (index == 0)
    {
        *head = current_node->next;
        if (current_node->next != NULL)
        {
            current_node->next->prev = NULL;
        }
        free(current_node);
        return 1;
    }

    /* Traverse the list */
    for (i = 0; current_node && i < index; i++)
    {
        current_node = current_node->next;
    }

    /* If index is out of bound */
    if (current_node == NULL)
    {
        return -1;
    }

    /* If deleting node in the middle or end */
    current_node->prev->next = current_node->next;
    if (current_node->next != NULL)
    {
        current_node->next->prev = current_node->prev;
    }
    free(current_node);

    return 1;
}
