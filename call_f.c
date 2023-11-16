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
	stack_t *nod;
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
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			freenode();
			exit(EXIT_FAILURE);
		}
		while (val[j] != '\0')
		{
			if (isdigit(val[j]) == 0)
			{
				fprintf(stderr, "L%d: usage: push integer\n", count);
				freenode();
				exit(EXIT_FAILURE);
			}
			j++;
		}
		nod = createnode(atoi(val) * flag);
		if (form == 0)
			fcall(&nod, count);
		if (form == 1)
			add_queue(&nod, count);
	}
	else
		fcall(&head, count);
}
