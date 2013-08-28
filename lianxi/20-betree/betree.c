#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node
{
	char item;
	link l,r;  // l 右  r左
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

void traverse(link t)
{
	if(t == NULL)
	{
		printf("()");
		return;
	}	
//	printf("t->item = %c\n",t->item);  // 前序！
	printf("(%c",t->item);
	traverse(t->l);
//	printf("t->item = %c\n",t->item);  //中序！
	traverse(t->r);
	printf(")",t->item);
//	printf("t->item = %c\n",t->item);  //后序！

}

link init(char VLR[],char LVR[],int n)
{
	link t;
	int k = 0;

	if(n <= 0)
		return NULL;
	for(k = 0; VLR[0] != LVR[k]; k++);
	
	t = make_node(VLR[0]);
	t->l = init(VLR+1,LVR,k);
	t->r = init(VLR+1+k,LVR+1+k,n-k-1);
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
	int dl,dr;

	if(!t)
		return 0;
	dl = depth(t->l);
	dr = depth(t->r);
	return 1 +(dl > dr ? dl : dr);
}

int isbalanced(link t)
{
	if(t == NULL)
		return 1;
	int lc = depth(t->l);
	int rc = depth(t->r);

	if(lc - rc >= 2 || rc - lc >= 2)
		printf("t->item = %c is notbalanced\n",t->item);

	if(isbalanced(t->l) == 0 || isbalanced(t->r) == 0)
		return 0;

	if(lc - rc >= 2 || rc - lc >= 2)
		return 0;

	return 1;

#if 0
	int lb = isbalanced(t->l);
	if(lb == 0)		
		printf("t->l->item = %c is notbalanced\n",t->l->item);
	int rb = isbalanced(t->r);
	if(rb == 0)
		printf("t->r->item = %c is notbalanced\n",t->r->item);
	
	if(isbalanced(t->l) == 0 || isbalanced(t->r) == 0)
		printf("t->l->item = %c is notbalanced\n",t->l->item);
	//	return 0;

	if(lb == 0 || rb == 0)
		return 0;
	if(lc - rc >= 2 || rc - lc >= 2)
		return 0;
	
	return 1;
#endif
}

link search(link t,char key)
{
	if(t == NULL)
		return NULL;
	if(key > t->item)
		return search(t->r,key);
	else if(key < t->item)
		return search(t->l,key);

	return t;
}
link insert(link t,char key)
{
	if(t == NULL)
		return make_node(key);
	if(t->item > key)
		t->l = insert(t->l,key);
	else if(t->item < key)
		t->r = insert(t->r,key);
	else
		printf("error is(%c)\n",key);

	return t;
}


int main(void)
{
//	char pre_seq[]= "421356"; // 前序
//	char in_seq[] = "123456";// 中序
//	root = init(pre_seq,in_seq,6);


#if 0
	link a,b,c,d,e,f;

//	printf("demo binary tree!\n");

	a = make_node('4');
	b = make_node('2');
	c = make_node('5');
	
	d = make_node('1');
	e = make_node('3');
	f = make_node('6');
	a->l = b;
	a->r = c;//a 的右子树为c
//	b->r = c;//b 的右子树为c
//	b->l = c;//b 的左子树为c
	b->l = d;
	b->r = e;
	c->r = f;
//	e->r = f;
//	f->r = c;
	root = a;;
#endif
	while(1){
		char ch;
		
		ch = getchar();
		getchar();
		if(ch == 'q')
			break;
		root = insert(root,ch);
	
		printf("\\tree");
		traverse(root);
		printf("\n");
	}
	while(1){
		char ch = getchar();
		getchar();

		link p = search(root,ch);
		if(p != NULL)
			printf("%c is founf\n",ch);
		else
			printf("%c is NOT found\n",ch);

	}
	printf("count = %d\n",count(root));
	printf("depth = %d\n",depth(root));

	printf("balanced = %d\n",isbalanced(root));
	return 0;
}
