#include "monty.h"

/**
 * free_stack - freestack list
 * @head: first one in stack
 * Return: none
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - freeone to be in the stack
 * @head: frst of the node
 * @counter: counter
 *
 * Return: none
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	bus.lifi = 0;
}
