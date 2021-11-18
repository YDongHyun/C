#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
  int data;
  struct stack* link;
}stack;

stack* head=NULL;

void push(int n){
  stack *p=(stack*)malloc(sizeof(stack));
  p->data=n;
  p->link=head;
  head=p;
}

void pop(){
  stack *p=(stack*)malloc(sizeof(stack));
  if (head!=NULL){
    printf("%d\n",head->data);
    p=head;
    p=head->link;
    head=NULL;
    head=p;
  }else{
    printf("-1\n");
  } 
}

void size(){
  int k=1;
  stack *p=(stack*)malloc(sizeof(stack));
  p=head;
  if (head!=NULL){
  while (p->link !=NULL){
    p=p->link;
    k+=1;
  }
    }else{
    k=0;
    }
  printf("%d\n",k);
}

void top(){
  if(head!=NULL){
    printf("%d\n",head->data);
  }else{
    printf("-1\n");
  }
}

void empty(){
  if(head!=NULL){
    printf("0\n");
  }else{
    printf("1\n");
  }
}

int main(){
  int a,b;
  char c[10];
  scanf("%d",&a);
  for(int i=0;i<a;i++){
    scanf("%s",c);
    if(strcmp(c,"pop")==0){
      pop();
    }
    else if(strcmp(c,"size")==0){
      size();
    }
    else if(strcmp(c,"empty")==0){
      empty();
    }
    else if(strcmp(c,"top")==0){
      top();
    }
    else{
      scanf("%d",&b);
      push(b);
    }
    }
  }
