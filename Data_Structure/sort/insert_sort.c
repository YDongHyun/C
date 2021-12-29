#include <stdio.h>

#define N 5

int ken[N]={3,5,9,7,1};
int i,j,tmp,a=1;

void insertion_sort(){
  for(i=1;i<N;i++){
    tmp=ken[i];
    j=i-1;
    while (tmp<ken[j] && j>=0){
      ken[j+1]=ken[j];
      j--;
    }
    ken[j+1]=tmp;
    a++;
  }
}


int main(){
  insertion_sort();
  for (i=0;i<N;i++){
    printf("%3d",ken[i]);
  }
  getchar();
}
