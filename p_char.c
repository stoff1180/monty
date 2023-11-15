#include "monty.h"

/**
 * p_char - Prints the Ascii value.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger representing the line number of of the opcode.
 * Return: void.
 */
void p_char(stack_t **stack, unsigned int count)
{
	int as;

	if (stack == NULL || *stack == NULL)
		err_str(11, count);

	as = (*stack)->n;
	if (as < 0 || as > 127)
		err_str(10, count);
	printf("%c\n", as);
}
