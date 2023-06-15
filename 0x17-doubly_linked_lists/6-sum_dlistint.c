#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current_node = head;

    while (current_node != NULL)
    {
        sum += current_node->n;
        current_node = current_node->next;
    }

    return sum;
}
