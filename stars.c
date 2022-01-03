#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void stars(int i, int j, int N){
	if (((i/N)%3==1)&&((j/N)%3==1)){
		printf(" ");
	}else{
		if (N/3==0){
			printf("*");
		}else{
			stars(i,j,N/3);
		}
	}
}


int main(){
	int N,M;
	scanf("%d",&N);
	
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			stars(i,j,N);
		}
		printf("\n");
	}
}
