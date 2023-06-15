#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *last_node;

    /* Allocate new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL; /* Return NULL if malloc failed */
    }

    /* Initialize new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the linked list is empty, then make the new node as head */
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    /* Traverse till the last node */
    last_node = *head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    /* Change the next of last node */
    last_node->next = new_node;

    /* Make last node as previous of new node */
    new_node->prev = last_node;

    return new_node;
}
