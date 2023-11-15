#include "monty.h"

/**
 * find_f - find the appropriate function for the opcode
 * @opcode: opcode
 * @val: argument of opcode
 * @form:  storage form. If 0 Nodes will be entered as a stack.
 * @count: line number
 * Return: void
 */
void find_f(char *opcode, char *val, int count, int form)
{
	int j;
	int flag;

	instruction_t list_f[] = {
		{"push", add_f},
		{"pall", printstack},
		{"pint", printtop},
		{"pop", pop_f},
		{"nop", nop_f},
		{"swap", swap_f},
		{"add", adds_nod},
		{"sub", sub_nod},
		{"div", div_nod},
		{"mul", mul_nod},
		{"mod", mod_nod},
		{"pchar", p_char},
		{"pstr", p_str},
		{"rotl", rotl_f},
		{"rotr", rotr_f},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (flag = 1, j = 0; list_f[j].opcode != NULL; j++)
	{
		if (strcmp(opcode, list_f[j].opcode) == 0)
		{
			f_call(list_f[j].f, opcode, val, count, form);
			flag = 0;
		}
	}
	if (flag == 1)
		error_f(3, count, opcode);
}
