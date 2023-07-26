# include "lists.h"
/**
 * dlistint_len - number of elements
 * @h: head
 * Return: value
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
