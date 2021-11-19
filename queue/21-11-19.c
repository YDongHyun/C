#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue{
  int data;
  
  struct queue* link;
}queue;

int sz=0;
queue* head=NULL;
queue *end=NULL;

void push(int n){
  queue *p=(queue*)malloc(sizeof(queue));
  sz+=1;
  p->data=n;
  p->link=NULL;
  if(head==NULL){
    head=end=p;
  }else{
    end->link=p;
    end=p;
  }
}

void pop(){
  queue *p=(queue*)malloc(sizeof(queue));
  sz-=1;
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
  if (sz>=0){
    printf("%d\n",sz);
  }else{
    printf("-1\n");
  }
}

void front(){
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

void back(){
  queue *p=(queue*)malloc(sizeof(queue));
  p=end;
  if (head!=NULL){ 
     printf("%d\n",p->data);
    }
  else{
    printf("-1\n");
    }
  }

int main(){
  int a,b;
  char c[10];
  scanf("%d",&a);
  for(int i=0;i<a;i++){
    scanf("%s",c);
    if(strcmp(c,"push")==0){
      scanf("%d",&b);
      push(b);
    }
    else if(strcmp(c,"pop")==0){
      pop();
    }
    else if(strcmp(c,"size")==0){
      size();
    }
    else if(strcmp(c,"front")==0){
      front();
    }
    else if(strcmp(c,"empty")==0){
      empty();
    }
    else if(strcmp(c,"back")==0){
      back();
    }
    else{
      break;
    }
  }
}
