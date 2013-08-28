#include <stdio.h>
#include <stdlib.h>

static char *queue;
static int h,t;
static int qc,size;


void init_queue(char sz)
{
	size = sz;

	queue = malloc(size*sizeof(*queue));
	h = t = qc = 0;
}

void destroy_queue(void)
{
	free(queue);
}

void enqueue(char iterm) //入队
{
	if(t == size){
		size += size;
		queue = realloc(queue,sizeof(*queue));
	}
	queue[t++] = iterm;
	t %= size;
	qc++;
}
char dequeue(void)
{
	char ch;
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

int main(void)
{
	char ch;

	init_queue(10);
	while((ch = getchar()) !=  '\n'&& !is_full())
		enqueue(ch);
	while(!is_empty())
		putchar(dequeue());
	putchar('\n');
	destroy_queue();
	
	return 0;
}
