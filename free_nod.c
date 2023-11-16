#include "monty.h"
stack_t *head = NULL;

/**
 * freenode - That free nodes in the stack.
 * return: void.
 */
void freenode(void)
{
	stack_t *ptr;

	if (head == NULL)
		return;

	for (; head != NULL;)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
