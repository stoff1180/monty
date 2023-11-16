#include "monty.h"

/**
 * p_char - That print the Ascii value.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represent the line number of of the opcode.
 * Return: void.
 */
void p_char(stack_t **stack, unsigned int count)
{
	int as;

	if (stack == NULL || *stack == NULL)
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
	as = (*stack)->n;
	if (as < 0 || as > 127)
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
	printf("%c\n", as);
}
