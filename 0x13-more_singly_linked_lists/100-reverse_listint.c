#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the address of the head of list_t list
 * Return: pointer to the node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = ahead;
	}

	(*head)->next = previous;
	return (*head);
}
