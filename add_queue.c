#include "monty.h"

/**
 * createnode - That create a node.
 * @num: Number to go inside the node.
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *createnode(int num)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freenode();
		exit(EXIT_FAILURE);
	}
	node->next = NULL;
	node->prev = NULL;
	node->n = num;
	return (node);
}


/**
 * add_queue - That add a node to the queue.
 * @newnode: Pointer to the new node.
 * @count: line number of the opcode.
 */
void add_queue(stack_t **newnode, unsigned int count)
{
	stack_t *ptr;
	(void)count;

	if (newnode == NULL || *newnode == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *newnode;
		return;
	}
	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
	}
	ptr->next = *newnode;
	(*newnode)->prev = ptr;

}
