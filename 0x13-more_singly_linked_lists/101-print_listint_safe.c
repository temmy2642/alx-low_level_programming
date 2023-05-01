#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *prev = NULL;

	while (curr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		if (curr < prev)
		{
			printf("-> [%p] %d\n", (void *)prev, prev->n);
			exit(98);
		}
	prev = curr;
	curr = curr->next;
	}

	return (count);
}
