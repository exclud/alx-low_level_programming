#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *current_node = *h;
    unsigned int i;

    /* Allocate new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL; /* Return NULL if malloc failed */
    }

    new_node->n = n;

    /* If inserting at the start of the list */
    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL)
        {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return new_node;
    }

    /* Traverse the list */
    for (i = 0; current_node && i < idx; i++)
    {
        if (i + 1 == idx)
        {
            /* Inserting in the middle or end */
            new_node->next = current_node->next;
            new_node->prev = current_node;
            if (current_node->next != NULL)
            {
                current_node->next->prev = new_node;
            }
            current_node->next = new_node;
            return new_node;
        }
        current_node = current_node->next;
    }

    /* If index is out of bound */
    free(new_node);
    return NULL;
}
