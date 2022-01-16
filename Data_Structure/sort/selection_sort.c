//ㅅㅓㄴㅌㅐㄱㅈㅓㅇㄹㅕㄹ
#include <stdio.h>

main(){
  int ken[]={8,7,2,4,8};
  int i,cnt;

  cnt=sizeof(ken)/sizeof(int);

  selection_a_sort(ken,cnt);

  for(int i=0;i<cnt;i++){
    printf("%3d",ken[i]);
  }
  getchar()
}

selection_a_sort(data,n)}
int data[],n;
{
  int i,k,imsi,j;
  n=n-1;
  for(i=0;i<n;i++){
    for(k=0;k<n;k++){
      if(data[i]>data[k]){
        imsi=data[i];
        data[i]=data[k];
        data[k]=imsi;
      }
  }
}
