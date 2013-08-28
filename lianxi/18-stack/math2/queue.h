#ifndef __STACK_H_
#define __STACK_H_

struct node{
	char iterm;
	int l;
	int r;
};

void enqueue(struct node iterm);
struct node dequeue(void);
int is_empty(void);
int is_full(void);
void init_queue(int sz);
void destroy_queue(void);

#endif
