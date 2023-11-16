#include "monty.h"

/**
 * mul_nod - That add the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represent the line number of of the opcode.
 * Return: nothing.
 */
void mul_nod(stack_t **stack, unsigned int count)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't %s, stack too short\n", count, "mul");
		freenode();
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	res = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = res;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
