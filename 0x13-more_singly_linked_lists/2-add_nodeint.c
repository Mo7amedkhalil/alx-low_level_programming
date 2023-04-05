#include "lists.h"

/**
  * add_nodeint - function that adds a new node
  * at the beginning of a listint_t list
  * @head: Double pointer to the head
  * @n: node value
  *
  * Return: address of new element (on success) or NULLon fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));
	if (!New)
		return (NULL);

	New->n = n;
	New->next = *head;
	*head = New;
	return (New);
}
