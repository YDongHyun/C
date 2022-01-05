#include <stdio.h>

int fact(int N,int M){
	if (M==0){
		return N;
	}
	else{
		N=N*M;
		fact(N,M-1);
	}
}	

int main(){
	int N,K,a;
	scanf("%d %d",&N,&K);
	
	a=fact(N,N-1)/(fact(N-K,N-K-1)*(fact(K,K-1)));
	printf("%d",a);
}
