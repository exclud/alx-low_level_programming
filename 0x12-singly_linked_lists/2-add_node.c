#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added as the new node's str element
 *
 * Return: the address of the new element, or 0 if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (head == 0 || str == 0)
return (0);

new_node = malloc(sizeof(list_t));
if (new_node == 0)
return (0);

new_node->str = strdup(str);
if (new_node->str == 0)
{
free(new_node);
return (0);
}

new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
