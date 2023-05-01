#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t linked list,
*               and returns the head node's data (n).
* @head: A pointer to the head of the list_t list.
*
* Return: If the linked list is empty - 0.
*         Otherwise - the head node's data (n).
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
