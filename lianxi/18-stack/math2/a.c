#include <stdio.h>
#include "queue.h"

struct node a[] = {{'a',1,2},{'b',3,4},{'c',5,6},{'d',-1,-1},{'e',-1,-1},{'f',-1,-1},{'g',-1,-1}};

void bfs_travel(int index,char sort[])
{
	int i = 0;
	struct node t;
	enqueue(a[index]);
	while(!is_empty()){
		t = dequeue();
		sort[i++] = t.iterm;
		if(t.l != -1)
			enqueue(a[t.l]);
		if(t.r != -1)
			enqueue(a[t.r]);
	}
	sort[i] = '\0';
}

int main(void)
{
	char sort[20];
	init_queue(20);
	bfs_travel(0,sort);
	printf("%s\n",sort);
//	destroy_stack();

	return 0;
}
