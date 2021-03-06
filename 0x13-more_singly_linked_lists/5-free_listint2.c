#include "lists.h"
/**
 * free_listint2 - free a linked list.
 * @head: pointer to the first element of the list
 *
 * Return: it's a void function
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
