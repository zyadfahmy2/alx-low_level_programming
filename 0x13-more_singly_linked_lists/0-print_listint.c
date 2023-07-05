#include "lists.h"
#include "stdio.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: the head of the node, user defined list
 * 
 * Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h!= NULL)
	{
		count++;
		printf("%d\n", );
		h = h-> next;
	}
	return (count);
}
