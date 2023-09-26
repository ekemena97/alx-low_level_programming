<<<<<<< HEAD
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
=======
#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: list
 *
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (nodes);
}
>>>>>>> 44bea3d19814c05677bea62c12231ee212a3b9ac
