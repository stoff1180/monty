#include "monty.h"

/**
 * add_f - Adds a node to the stack.
 * @newnode: Pointer to the new node.
 * @count: Interger representing the line number of the opcode.
 * Return: nothing.
 */
void add_f(stack_t **newnode, unsigned int count)
{
	stack_t *ptr;
	(void) count;

	if (newnode == NULL || *newnode == NULL)
		exit(EXIT_FAILURE);
	if (h == NULL)
	{
		h = *newnode;
		return;
	}
	ptr = h;
	h = *newnode;
	h->next = ptr;
	ptr->prev = h;
}

