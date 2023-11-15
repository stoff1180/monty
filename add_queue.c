#include "monty.h"

/**
 * createnode - Creates a node.
 * @num: Number to go inside the node.
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *createnode(int num)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		error_f(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = num;
	return (node);
}


/**
 * add_queue - Adds a node to the queue.
 * @new_node: Pointer to the new node.
 * @count: line number of the opcode.
 */
void add_queue(stack_t **new_node, unsigned int count)
{
	stack_t *ptr;
	(void)count;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (h == NULL)
	{
		h = *new_node;
		return;
	}
	for (ptr = h; ptr->next != NULL; ptr = ptr->next)
	{
	}
	ptr->next = *new_node;
	(*new_node)->prev = ptr;

}

