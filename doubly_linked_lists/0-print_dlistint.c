# include "lists.h"
/**
 * print_dlistint - print elements for list
 * @h: head of list
 * Return: nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
