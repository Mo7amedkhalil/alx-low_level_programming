#include <string.h>
#include "lists.h"

/**
  * add_node_end - function that adds a new node
  * at the end of a list_t list
  * @head: double pointer to the list
  * @str: the string to be added
  *
  * Return: address of new element or NULL on failure
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
	size_t i;

	new = malloc(sizeof(list_t));
	while (str[i])
		i++;
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	} else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
