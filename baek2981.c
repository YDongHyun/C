#include <stdio.h>

int main(){
  int a,b;
  
  scanf("%d",&a);
  int s[a];
  for(int i=0;i<a;i++){
    scanf("%d",&s[i]);
  }
  int small_num=s[0];
  for(int k=0;k<a;k++){
    if(small_num>s[k]){
      small_num=s[k];
    }
    }
  for(int j=2;j<=small_num;j++){
    for(int l=0;l<a-1;l++){
      if((s[l]%j)==(s[l+1]%j)){
        if(l==a-2){
          printf("%d ",j);
          }else{
          continue;
          }
      }else{
        break;
      }
    }

  }
}
