#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;			
	struct Node *next;
}Node;

struct Node *head=NULL;
struct Node *end=NULL;

void addfirst(int n){
  Node *p=(Node*)malloc(sizeof(Node));
  p->data=n;
  p->next=head;
  head=p;
  
}

void addrear(int n){
  Node *p=(Node*)malloc(sizeof(Node));
  p->data=n;
  p->next=NULL;
  if(head==NULL){
    head=end=p;
  }else{
    end->next=p;
    end=p;
  } 
}


void delfirst(){
  Node *tmp=(Node*)malloc(sizeof(Node));
  tmp=head->next;
  head=NULL;
  head=tmp;
}

void delrear(){
  Node *tmp=(Node*)malloc(sizeof(Node));
  tmp=head;

  while(tmp->next !=NULL){
    tmp=tmp->next;
    }
  free(tmp);
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
  for(int i=0;i<20;i++){
    addrear(i);  
   
  }
  delrear();
  print_list(head);
}
