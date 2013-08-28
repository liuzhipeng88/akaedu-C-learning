#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node
{
	char item;
	link l,r;
};

link root = NULL;

link make_node(char item)
{
	link p;

	p = malloc(sizeof(*p));

	p->item = item;
	p->l = NULL;
	p->r = NULL;

	return p;
}

void traverse(link p)
{
	if(p == NULL)
	{
		printf("()");
		return;
	}
//	printf("p->item = %c\n",p->item);
	printf("(%c",p->item);
	traverse(p->l);
//	printf("p->item = %c\n",p->item);
	traverse(p->r);
	printf(")",p->item);
//	printf("p->item = %c\n",p->item);
}

link init(char VLR[],char LVR[],int n)
{
	int k = 0;
	link t;

	if(n <= 0)
		return NULL;
	for(k = 0; VLR[0] != LVR[k];k++)
		;
		t = make_node(VLR[0]);
		t->l = init(VLR+1,LVR,k);
		t->r = init(VLR+k+1,LVR+1+k,n-k-1);
	
	return t;
}

int count(link t)
{
	if(t == NULL)
		return 0;
	return 1 + count(t->l) + count(t->r);
}

int depth(link t)
{
	int dl = 0,dr = 0;

	if(t == NULL)
		return 0;
	dl = depth(t->l);
	dr = depth(t->r);
	
	return 1 + (dl > dr ? dl : dr);
}

int main(void)
{
	char pre_seq[] = "421356";
	char in_seq[] = "123456";

	root = init(pre_seq,in_seq,6);




#if 0
	link a,b,c,d,e,f;
	
	printf("demo binary tree\n");

	a = make_node('4');
	b = make_node('2');
	c = make_node('5');
	d = make_node('1');
	e = make_node('3');
	f = make_node('6');

	a->l = b;
	a->r = c;
	b->l = d;
	b->r = e;
	c->r = f;

	root = a;
#endif


	printf("\\tree");
	traverse(root);
	printf("\n");

	printf("count = %d\n",count(root));
	printf("depth = %d\n",depth(root));
	return 0;
}
