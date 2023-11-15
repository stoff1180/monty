#include "monty.h"


/**
 * free_nodes - Frees nodes in the stack.
 * return: void.
 */
void freenode(void)
{
	stack_t *ptr;

	if (h == NULL)
		return;

	for (; h != NULL;)
	{
		ptr = h;
		h = h->next;
		free(ptr);
	}
}
