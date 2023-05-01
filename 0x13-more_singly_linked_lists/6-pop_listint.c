#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to the address of the head of listint_t list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(tmp);

return (num);
}
