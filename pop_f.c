#include "monty.h"

/**
 * pop_f - That add a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represent the line number of of the opcode.
 * Return: nothing.
 */
void pop_f(stack_t **stack, unsigned int count)
{
	stack_t *ptr;

	if (stack == NULL || *stack == NULL)
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
	ptr = *stack;
	*stack = ptr->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(ptr);
}
