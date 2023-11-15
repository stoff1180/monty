#include "monty.h"

/**
 * adds_nod - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 * Return: nothing.
 */
void adds_nod(stack_t **stack, unsigned int count)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		err_op(8, count, "add");

	(*stack) = (*stack)->next;
	res = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = res;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
