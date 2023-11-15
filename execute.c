#include "monty.h"

/**
 * open_fd - opens a file
 * @f_name: the file namepath
 * Return: void
 */

void open_fd(char *f_name)
{
	FILE *fd = fopen(f_name, "r");

	if (f_name == NULL || fd == NULL)
		error_f(2, f_name);

	read_fd(fd);
	fclose(fd);
}


/**
 * read_fd - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */

void read_fd(FILE *fd)
{
	int count = 1;
	int form = 0;
	char *buf = NULL;
	size_t len = 0;

	while (getline(&buf, &len, fd) != -1)
	{
		form = split_ln(buf, count, form);
		count++;
	}
	free(buf);
}


/**
 * split_ln - Separates each line into tokens to determine which funct to call
 * @buf: line from the file
 * @count: line number
 * @form:  storage format. If 0 Nodes will be entered as a stack.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int split_ln(char *buf, int count, int form)
{
	char *opcode, *val;
	const char *delim = "\n ";

	if (buf == NULL)
		error_f(4);

	opcode = strtok(buf, delim);
	if (opcode == NULL)
		return (form);
	val = strtok(NULL, delim);

	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);

	find_f(opcode, val, count, form);
	return (form);
}
