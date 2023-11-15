#include "monty.h"

/**
 * rotl_f - Rotates the first node of the stack to the bottom.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 * Return: void.
 */
void rotl_f(stack_t **stack, __attribute__((unused))unsigned int count)
{
	stack_t *ptr;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	for (ptr = *stack; ptr->next != NULL; ptr = ptr->next)
	{
	}
	ptr->next = *stack;
	(*stack)->prev = ptr;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}


/**
 * rotr_f - Rotates the last node of the stack to the top.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 */
void rotr_f(stack_t **stack, unsigned int count)
{
	stack_t *ptr;
	(void) count;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	for (ptr = *stack; ptr->next != NULL; ptr = ptr->next)
	{
	}
	ptr->next = *stack;
	ptr->prev->next = NULL;
	ptr->prev = NULL;
	(*stack)->prev = ptr;
	(*stack) = ptr;
}

