#include "monty.h"

/**
 * printstack - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: line number of  the opcode.
 * Return: nothing.
 */
void printstack(stack_t **stack, unsigned int count)
{
	stack_t *ptr;
	(void) count;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	ptr = *stack;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}


/**
 * printtop - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 * Return: nothing.
 */
void printtop(stack_t **stack, unsigned int count)
{
	if (stack == NULL || *stack == NULL)
		err_op(6, count);
	printf("%d\n", (*stack)->n);
}

