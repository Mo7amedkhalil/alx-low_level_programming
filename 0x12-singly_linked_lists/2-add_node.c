#include "lists.h"
#include <string.h>

/**
  * add_node_end - Write a function that adds a new node
  * at the beginning of a list_t list
  * @head: points to head of list
  * @str: new string to be added in the node
  *
  * Return: the add of new ele. or NULL on failure
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *Nouveau;
	size_t i = 0;

	Nouveau = malloc(sizeof(list_t));
	if (!Nouveau)
		return(NULL);

	while (str[i])
		i++;

	Nouveau->str = strdup(str);
	Nouveau->len = i;
	Nouveau->next = *head;
	*head = Nouveau;

	return (Nouveau);
}
