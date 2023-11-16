#include "monty.h"

/**
 * p_str - That print a string.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @count: Interger represent the line number of of the opcode.
 * Return: nothing.
 */
void p_str(stack_t **stack, unsigned int count)
{
	int as;
	stack_t *ptr;
	(void) count;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}
	for (ptr = *stack; ptr != NULL; ptr = ptr->next)
	{
		as = ptr->n;
		if (as <= 0 || as > 127)
			break;
		printf("%c", as);
	}
	printf("\n");
}
