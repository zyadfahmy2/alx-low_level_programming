#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: the head of the node, user defined list
 * 
 * Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *temp;

	count = 0;
	temp = h;

	while(temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	return (count);
}
