#include <stdio.h>
#include <stdlib.h>

#define N 10
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
}

void delete_node(link p)
{
	if(p == head){
		head = p->next;
		return;
	}
	else
	{
		link pre;

		for(pre = head; pre != NULL;pre = pre->next)
			if(pre->next == p)
				pre->next = p->next;
	}
		free(p);
	return;

}

int main(void)
{
	int i = 0;
	int countoff = 0; //报数， 报到的退出！
	link p;
	int setp = 0; // 步骤！
	link save; //保留 countoff 的值!

	for(i = 0; i < N; i++)
	{
		p = make_node(i + 1);
		insert_tail(p);
	}

	p = head;
	while(p){
		printf("p->id = %d\n",p->id);

		p = p->next;
	}
	p = head;
	while(1){
		setp++;
		countoff++;

		printf("setp %3d: %3d countoff %3d\n",setp,p->id,countoff);

		save = p;
		p = p->next;
		
		if(p == NULL)
			p = head;

		if(countoff == OUT){
			countoff = 0;
			printf("who is out? %3d\n",save->id);

			delete_node(save);
		}
		if(head == NULL)
			break;
	}

	return 0;
}
