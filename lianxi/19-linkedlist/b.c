#include <stdio.h>
#include <stdlib.h>

#define N  100
#define OUT 3

typedef struct node *link;

struct node
{
	int id;
	link next;
};

link make_node(int id)
{
	link p;
	p = malloc(sizeof(*p));
	
	p->id = id;
	p->next = NULL;

	return p;
}

link head = NULL;
link tail = NULL;

void insert_tail(link p)
{
	if(head == NULL){
		head = tail = p;
		return;
	}
	tail->next = p;
	tail = p;

	return;
}

void traverse(link t)
{
	link p;

	p = t;
	while(p != NULL){
		printf("p->id =  %d\n",p->id);
		p = p->next;
	}

	return;
}

void delete(link p)
{
	if(p == head){
		head = p->next;
		return;
	}
	else
	{
		link pre;
		for(pre = head; pre != NULL;pre = pre->next)
			if(pre->next == p){
				pre->next = p->next;
	}
	free(p);
	return;
}
}

int main(void)
{
	int i = 0;
	int step = 0;
	int countoff = 0;
	link p;

	printf("demo node is\n");
	for(i = 0; i < N; i++){
		p = make_node(i+1);
//		printf("p->id = %d\n",p->id);
		insert_tail(p);
	}
	
	traverse(head);

	p = head;
	while(1){
		link save;
		step++;

		countoff++;
		printf("step %3d:p->id: %3d countoff: %d\n",step,p->id,countoff);
		save = p;
		p = p->next;
		if(p == NULL)
			p = head;

		if(countoff == OUT){
			countoff = 0;
			printf("who is out: %d\n",save->id);

			delete(save);
		}
		if(head == NULL)
			break;
	}
	
	return 0;
}
