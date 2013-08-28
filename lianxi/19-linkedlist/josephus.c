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
	if(head == NULL) // 检测是否是第一次插入！
	{
		head = tail = p;
		return;
	}
	//next insert
	tail->next = p;
	tail = p;

	return;
}

void traverse(link t)   //遍历
{
	link p;

	p = t;
	while(p != NULL){
		printf("p->id = %d\n",p->id);
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

		for(pre = head;pre != NULL;pre = pre->next)
			if(pre->next == p)
				pre->next = p->next;
	}
	free(p);
	return;
}

int main(void)
{
	int i = 0;
	int step = 0;
	int countoff = 0;  //countoff 报数
	link p;

	printf("demo josephus ring\n");

	for(i = 0; i < N;i++){
		p = make_node(i+1);
		insert_tail(p);
	}

	// paintf all list id 遍历
	traverse(head);

	p = head;
	step = 0;
	while(1){
		link save;
		step++;

		countoff++;
		printf("step %3d: %3d countoff: %d\n",step,p->id,countoff);

		save = p;
		p = p->next;
		if(p == NULL)
			p = head;

		if(countoff == OUT){
			countoff = 0;
			printf("who is out? is: %d\n",save->id);

			delete(save);
		}
		if(head == NULL)
			break;
	}

	return 0;
}
