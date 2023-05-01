#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to the head of the listint_t list.
* @n: The integer to store in the new node.
*
* Return: If memory allocation fails or head is NULL, returns NULL.
* Otherwise, returns the address of the new element.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
