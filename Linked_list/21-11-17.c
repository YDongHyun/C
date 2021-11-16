#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;			
	struct Node *next;
}Node;

Node* addfirst(Node *head,int n){
  Node *p=(Node*)malloc(sizeof(Node));
  p->data=n;
  p->next=head;
  head=p;
  return head;
}


void print_list(struct Node *head)
{
  struct Node *p=head;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;

	}
}

int main(){
  struct Node *head=NULL;

  for(int i=0;i<10;i++){
    head = addfirst(head,i);
   
  }
  print_list(head);
}
