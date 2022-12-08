#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a listint_t linked list.
* @head: points to the pointer that points to the address of the first node.
* @index: index.
* Return: nth node; NULL if node does not exits.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
return (NULL);
while (head)
{
if (count == index)
return (head);
count++;
head = head->next;
}
return (NULL);
}
