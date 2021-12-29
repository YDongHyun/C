#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack {
	Data stackArr[STACK_LEN];
	int topIndex;
}ArrayStack;

typedef ArrayStack stack;

void stackInit(stack* pstack) {
	pstack->topIndex = -1;
}

int IsEmpty(stack* pstack) {
	if (pstack->topIndex == -1) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

void push(stack* pstack, Data data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data pop(stack* pstack) {
	int rIdx;
	if (IsEmpty(pstack)) {
		printf("stack memory Error");
		exit(-1);
	}
	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;
	return pstack->stackArr[rIdx];
}

Data peed(stack* pstack) {
	if (IsEmpty(pstack)) {
		printf("stack memory Error");
		exit(-1);
	}
	return pstack->stackArr[pstack->topIndex];
}

int main(void) {
	stack s;
	StackInit(&s);

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	while (!IsEmpty(&s))
		printf("%d", pop(&s));

	return 0;
}
