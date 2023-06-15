#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* Allocate new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL; /* Return NULL if malloc failed */
    }

    /* Initialize new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    /* Update the head of the list */
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;

    /* Return the address of the new node */
    return new_node;
}
