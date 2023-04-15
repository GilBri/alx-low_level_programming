#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 *               of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the list is empty, returns 0. Otherwise,
 *        returns the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	f(head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

