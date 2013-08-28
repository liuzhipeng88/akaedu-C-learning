#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static struct node *queue;
static int h,t;
static int qc,size;


void init_queue(int sz)
{
	size = sz;

	queue = malloc(size*sizeof(*queue));
	h = t = qc = 0;
}
void enqueue(struct node iterm) //入队
{
	queue[t++] = iterm;
	t %= size;
	qc++;
}
struct node dequeue(void)
{
	struct node ch;
	ch = queue[h++];
	h %= size;
	qc--;

	return ch;
}

int is_full(void)
{
	return qc == size;
}

int is_empty(void)
{
	return qc == 0;
}
