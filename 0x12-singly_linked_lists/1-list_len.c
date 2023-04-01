#include "lists.h"

/**
  * list_len - function that return
  * the number of elements in a linked list_t lis
  * @h: ponter to list
  *
  * Return: no of elements
  */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
