#include "monty.h"

/**
 * adds_nod - That add the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represents the line number of of the opcode.
 * Return: nothing.
 */
void adds_nod(stack_t **stack, unsigned int count)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		fprintf(stderr, "L%d: can't %s, stack too short\n", count, "add");

	(*stack) = (*stack)->next;
	res = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = res;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
