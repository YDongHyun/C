#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct tNode{
  struct tNode *left;
  char data;
  struct tNode *right;
}tNode;

tNode * makeBT(char data, tNode *leftN, tNode *rightN){
  tNode* rt =(tNode *)malloc(sizeof(tNode));
  rt->data=data;
  rt->left =leftN;
  rt->right = rightN;
  return rt;
}

//전위운행
void preOrder(tNode *ptr){ 
  if (ptr){
    printf("%c ",ptr->data);
    preOrder(ptr->left);
    preOrder(ptr->right);
  }
}

//중위운행
void inOrder(tNode*ptr){
  if(ptr){
    inOrder(ptr->left);
    printf("%c ",ptr->data);
    inOrder(ptr->right);
  }
}

//후위운행
void postOrder(tNode* ptr){
  if (ptr){
    postOrder(ptr->left);
    postOrder(ptr->right);
    printf("%c ",ptr->data);
  }
}

int  main(){
  tNode *n1, *n2, *n3, *n4, *n5, *n6;

  n6=makeBT('G',NULL,NULL);
  n5=makeBT('E',NULL,NULL);
  n4=makeBT('D',NULL,NULL);
  n3=makeBT('C',NULL,n6);
  n2=makeBT('B',n4,n5);
  n1=makeBT('A',n2,n3);

  preOrder(n1);
  inOrder(n1);
  postOrder(n1);

}
