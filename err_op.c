#include "monty.h"

/**
 * err_op - handles errors.
 * @err_msg: The error codes
 * Return: nothing
 */
void err_op(int err_msg, ...)
{
	va_list args;
	char *ops;
	int count;

	va_start(args, err_msg);
	switch (err_msg)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(args, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(args, int));
			break;
		case 8:
			count = va_arg(args, unsigned int);
			ops = va_arg(args, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", count, ops);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(args, unsigned int));
			break;
		default:
			break;
	}
	freenode();
	exit(EXIT_FAILURE);
}

