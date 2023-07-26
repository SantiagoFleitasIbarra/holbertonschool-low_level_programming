# include "lists.h"
/**
 * free_dlistint - free memory
 * @head: head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	if (head)
		aux = head->next;

	free(head);

	if (aux)
		free_dlistint(aux);
}
