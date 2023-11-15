#include "monty.h"

/**
 * err_str - handles errors.
 * @err_msg: The error codes
 * Return: nothing
 */
void err_str(int err_msg, ...)
{
	va_list args;
	int count;

	va_start(args, err_msg);
	count = va_arg(args, int);
	switch (err_msg)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
			break;
		default:
			break;
	}
	freenode();
	exit(EXIT_FAILURE);
}

