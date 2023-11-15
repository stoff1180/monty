#include "monty.h"

/**
 * swap_f - Swaps the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 * Return: nothing.
 */
void swap_f(stack_t **stack, unsigned int count)
{
	stack_t *ptr;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		err_op(8, count, "swap");
	ptr = (*stack)->next;
	(*stack)->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = *stack;
	ptr->next = *stack;
	(*stack)->prev = ptr;
	ptr->prev = NULL;
	*stack = ptr;
}

