#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeist_at_index - function that inserts a new node at a given
 * position
 * head: pointer to the address of the head of listint_t list
 * idx: index of the listint_t list where the node is added
 * @n: integer of node to have
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *reprint = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

if (idx == 0)
{
new->next = reprint;
*head = new;
return (new);
}

for (i = 0; i < (idx - 1); i++)
{
	if (reprint == NULL || reprint->next == NULL)
		return (NULL);
	reprint = reprint->next;
}
new->next = reprint->next;
reprint->next = new;

return (NULL);
}
