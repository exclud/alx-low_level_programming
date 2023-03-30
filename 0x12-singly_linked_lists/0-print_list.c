#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp = h;
size_t count = 0;

while (temp != 0)
{
if (temp->str == 0)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", temp->len, temp->str);
count++;
temp = temp->next;
}

return (count);
}
