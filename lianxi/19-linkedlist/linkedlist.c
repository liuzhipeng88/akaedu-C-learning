#include <stdio.h>
#include <stdlib.h>

struct node
{
	char item;
	struct node *next;
};

typedef struct node * link;

link head = NULL;

int main(void)
{
	link p = NULL;
	
	printf("sizeof of p = %d\n",sizeof(p));
	printf("sizeof of *p = %d\n",sizeof(*p));// 测试结构体所占字节！
	printf("sizeof of *p = %d\n",sizeof(struct node));//同上！
	
//	p = &a; 相当于静态指针
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'a';
	p->next = NULL;
	
	head = p;

	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'b';
	p->next = NULL;

	// a -> b
	head->next = p;

	
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'c';
	p->next = NULL;

	//b -> c
	head->next->next = p;

/*	//1. insert D before head  从开头插入D!
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'D';
	p->next = head;

	head = p;*/
	
	//2. insert E after tail 从最后插入！
/*	link tail = NULL;
	p = head;
	while(p != NULL){
		if(p->next == NULL)
			tail = p;
		p = p->next;
	}
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'E';
	p->next =NULL;
	
	tail->next = p;   */

/*	//insert B after 'b' head 
	link pos1 = head->next;
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'B';
	// step 1: B->c;
	p->next = pos1->next;
	// step 2: b->B;
	pos1->next = p;   */

/*	//insert A before 'b' head 
	link pos2 = head->next;
	link prev;
	p = head;
	while(p != NULL){
		if(p->next == pos2){
			prev = p;
			break;
		}
		p = p->next;
	}
	p = malloc (sizeof(*p));//相当于动态指针!
	p->item = 'A';
	p->next = pos2;  //插入要先链接下边的，再链接上边的！

	prev->next = p;   */
	
/*	// 1. delete pos == head
	link pos3 = head;

	head = pos3->next;
	free(pos3);
	pos3 = NULL;   */
	
	//2. delete pos != head
	link pos4 = head->next;
	link prev2 = NULL;

	p = head;
	while(p != NULL){
		if(p->next == pos4){
			prev2 = p;
			break;
		}
    p = p->next;
	}
	prev2->next = pos4->next;
	free(pos4);
	pos4 = NULL;



	//travel list from head 遍历链表!
	p = head;
	while(p != NULL){
		
		printf("p->item = %c\n",p->item);
		printf("p->next = %p\n",p->next);
		p = p->next;
	}

	return 0;
}
