#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std; 
int n, ch[11]; //전역변수를 설정하고, 지역에서 할당해줘도 사용 가능 


void DFS(int L){  //트리 구조
	int i; 
	if(L==n+1){
		for(i=1;i<=n;i++){
			if(ch[i]==1) printf("%d ",i);
		}
		puts(""); //줄바꿈
	}else{
		ch[L]=1;  //트리 왼쪽부분에 1을 할당 
		DFS(L+1);
		ch[L]=0;
		DFS(L+1); //트리 오른쪽부분에 0을 할당
	}
}
	
int main(){
	scanf("%d",&n);
	DFS(1);
	return 0;
}    
