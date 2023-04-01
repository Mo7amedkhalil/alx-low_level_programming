#include "lists.h"

/**
  * print_list - prints elements of linked list
  * @h: pointer to list
  *
  * Return: no. of nodes printed
  */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while {h}
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h - h->next;
		c++;
	}
	return (c);
}
