#include <stdio.h>

void new_bubble_a_sort(data,n)
int data[],n;
{
  int i,k,tmp,j;
  int flag;
  n=n-1;

  for(i=0;i<n;i++){
    flag=1;
    for(k=0;k<=n-1;k++){
      if(data[k]>data[k+1]){
        tmp=data[k];
        data[k]=data[k+1];
        data[k+1]=tmp;
        flag=0;
      }
    }
    if(flag==1)break;
  }
}

int main()
{
  int ken[]={8,7,2,4,6};
  int i,cnt;

  cnt=sizeof(ken)/sizeof(int);

  new_bubble_a_sort(ken,cnt);

  for(i=0;i<cnt;i++){
    printf("%3d",ken[i]);
  }
  getchar();
}
