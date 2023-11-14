#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slug, *quick;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slug = head->next;
	quick = (head->next)->next;

	while (quick)
	{
		if (slug == quick)
		{
			slug = head;
			while (slug != quick)
			{
				num++;
				slug = slug->next;
				quick = quick->next;
			}

			slug = slug->next;
			while (slug != quick)
			{
				num++;
				slug = slug->next;
			}

			return (num);
		}

		slug = slug->next;
		quick = (quick->next)->next;
	}

	return (0);
}
