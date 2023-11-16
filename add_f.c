#include "monty.h"

/**
 * add_f - That add a node to the stack.
 * @newnode: Pointer to the new node.
 * @count: Interger represents the line number of the opcode.
 * Return: nothing.
 */
void add_f(stack_t **newnode, unsigned int count)
{
	stack_t *ptr;
	(void) count;

	if (newnode == NULL || *newnode == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *newnode;
		return;
	}
	ptr = head;
	head = *newnode;
	head->next = ptr;
	ptr->prev = head;
}
