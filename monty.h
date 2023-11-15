#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *h;
typedef void (*op_f)(stack_t **, unsigned int);
void open_fd(char *f_name);
int split_ln(char *buf, int count, int form);
void read_fd(FILE *);
void find_f(char *, char *, int, int);
stack_t *createnode(int n);
void freenode(void);
void printstack(stack_t **, unsigned int);
void add_f(stack_t **, unsigned int);
void add_queue(stack_t **, unsigned int);
void f_call(op_f, char *, char *, int, int);
void printtop(stack_t **, unsigned int);
void pop_f(stack_t **, unsigned int);
void nop_f(stack_t **, unsigned int);
void swap_f(stack_t **, unsigned int);
void adds_nod(stack_t **, unsigned int);
void sub_nod(stack_t **, unsigned int);
void div_nod(stack_t **, unsigned int);
void mul_nod(stack_t **, unsigned int);
void mod_nod(stack_t **, unsigned int);
void p_char(stack_t **, unsigned int);
void p_str(stack_t **, unsigned int);
void rotl_f(stack_t **, unsigned int);
void error_f(int err_cod, ...);
void err_op(int err_cod, ...);
void err_str(int err_cod, ...);
void rotr_f(stack_t **, unsigned int);

#endif
