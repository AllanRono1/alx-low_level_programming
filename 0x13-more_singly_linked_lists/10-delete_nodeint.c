#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the address of the head of listint_t list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *reprint = *head;
	unsigned int i;

	if (reprint == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(reprint);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (reprint->next == NULL)
			return (-1);

		reprint = reprint->next;
	}

	tmp = reprint->next;
	reprint->next = tmp->next;
	free(tmp);
	return (1);
}
