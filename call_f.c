#include "monty.h"


/**
 * f_call - Calls the required function.
 * @fcall: Pointer to the function that is about to be called.
 * @op: string representing the opcode.
 * @val: string representing a numeric val.
 * @count: line numeber for the instruction.
 * @form: Format specifier. If 0 Nodes will be entered as a stack.
 * Return: void.
 */
void f_call(op_f fcall, char *op, char *val, int count, int form)
{
	stack_t *node;
	int flag;
	int j = 0;

	flag = 1;
	if (strcmp(op, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			flag = -1;
		}
		if (val == NULL)
			error_f(5, count);
		while (val[j] != '\0')
		{
			if (isdigit(val[j]) == 0)
				error_f(5, count);
			j++;
		}
		node = createnode(atoi(val) * flag);
		if (form == 0)
			fcall(&node, count);
		if (form == 1)
			add_queue(&node, count);
	}
	else
		fcall(&h, count);
}
