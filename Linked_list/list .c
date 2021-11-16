#include <stdio.h>
#include <stdlib.h>

// 연결 리스트를 구성할 Node 구조체
struct Node {
	int data;			// 노드에 저장할 데이터
	struct Node *next;	// 현재 노드의 다음 노드 포인터
};

struct Node *pStart = NULL;	// 리스트의 첫 노드의 포인터
struct Node *pEnd = NULL;	// 리스트의 마지막 노드의 포인터

void addrear(int val)https://github.com/YDongHyun/C/blob/main/list%20.c
{
	struct Node *Current;	// 리스트에 추가할 새 노드 생성
	Current = (struct Node *) malloc(sizeof(struct Node));
	Current->data = val;	// 새 Node data 필드에 val 을 저장
	Current->next = NULL;	// 리스트 마지막에 추가할 노드이므로 다음 노드 없음

	if(pStart == NULL)		// 첫 번째 노드일 경우
		pStart = pEnd = Current;
	else {
		pEnd->next = Current;	// 마지막 노스트 다음에 새로 만든 노드 추가
		pEnd = Current;		// 리스트 마지막에 추가하는 것이므로 pEnd 를 바꿔줌
	}
}

void printlist(struct Node *Current)
{
	// Current 가 가리키는 리스트를 출력한다.
	Current = pStart;
	while (Current != NULL) {
		printf("%d\n", Current->data);
		Current = Current->next;
	}
}

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++) 
		addrear(i);	// 새 노드를 만들어 리스트 뒤에 i를 추가
	printlist(pStart);
	return 0;
}
