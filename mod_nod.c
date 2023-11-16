#include "monty.h"

/**
 * mod_nod - That adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represent the line number of of the opcode.
 */
void mod_nod(stack_t **stack, unsigned int count)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't %s, stack too short\n", count, "mod");
		freenode();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		freenode();
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	res = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = res;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
