#include "monty.h"

/**
 * error_f - Prints appropiate error messages determined by their error code.
 * @err_msg: The error codes
 * Return: nothing
  */
void error_f(int err_msg, ...)
{
	va_list args;
	char *ops;
	int count;

	va_start(args, err_msg);
	switch (err_msg)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(args, char *));
			break;
		case 3:
			count = va_arg(args, int);
			ops = va_arg(args, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", count, ops);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(args, int));
			break;
		default:
			break;
	}
	freenode();
	exit(EXIT_FAILURE);
}
