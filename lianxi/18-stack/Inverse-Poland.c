#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int *stack = NULL;
static int top;
static int size;

int init_stack(int sz)
{
	size = sz;

	stack = malloc(sz * sizeof(*stack));
	if(!stack)
		return -1;
	return 0;
}

void push(char iterm)
{
	if(top == size){
		size += size;
		stack = realloc(stack,sizeof(*stack));
	}
	stack[top++] = iterm;
}

int is_empty(void)
{
	return top == 0;
}

int is_full(void)
{
	return top == size;
}

int pop(void)
{
	return stack[--top];
}

void count_stack(char *token)
{
	int a = 0,b = 0;

	switch(*token){
		case '+':
			b = pop(),a = pop();push(a+b);
			break;
		case '-':
			b = pop(),a = pop();push(a-b);
			break;
		case '*':
			b = pop(),a = pop();push(a*b);
			break;
		case '/':		
			b = pop(),a = pop();push(a/b);
			break;
		default:
			push(atoi(token));
	}

	printf("res = %d\n",pop());
	//	return pop();
}

void destroy_stack(void)
{
	free(stack);
}

int main(void)
{
	char str[100];
	char *token;
	int a = 0, b = 0;

	init_stack(100);
	fgets(str,sizeof(str),stdin);
	token = strtok(str," \n");
	if(!token){
		printf("err input\n");
		return -1;
	}
	push(atoi(token));
	while(token = strtok(NULL," \n")){
		switch(*token){
			case '+':
				b = pop(),a = pop();push(a+b);
				break;
			case '-':
				b = pop(),a = pop();push(a-b);
				break;
			case '*':
				b = pop(),a = pop();push(a*b);
				break;
			case '/':		
				b = pop(),a = pop();push(a/b);
				break;
			default:
				push(atoi(token));
		}

	}

	printf("res = %d\n",pop());
	destroy_stack();
	return 0;

}
