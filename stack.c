#include <stdio.h>
#define MAX 20
char stackMAX];
int top = -1;
char pop();

void main()
{
	printf("<<스택 삽입 삭제>>\n\n");
	while (1) {
		printf("\n---- Selection number(1, or 2,or 0)---\n");
		printf(" 1. push	2.pop	0.end\n");
		printf("------------------\n\n");
		switch (getch()) {
			printf("-----Press character-------\n");
		case '1': printf("PUSH: ");
			push(getche());
			d_stack();
			break;
		case '2': printf("POP : ");
			printf("%d", pop());
			d_stack();
			break;
		case '0':return;
		}
	}
}

push(char push_in)
{
	if (top==MAX) puts("Stack is Full!);
	else
	{
		top++
			stacktop] = push_in;
	}
}

d_stack()
{
	int i;
	printf("\n current Stack state: ");

	for (i = 0; i <= top; i++)
		putch(stacki]);
	printf("\n");
}

char pop()
{
	char pop_result;

	if (top == -1) puts("Stack is empty");
	else
	{
		pop_result = stacktop];
		top--;
	}
	return pop_result;
}
