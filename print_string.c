#include "monty.h"

/**
 * f_pstr - prints to stack
 * @head: list of the nodes
 * @counter: counter
 *
 * Return: none
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
