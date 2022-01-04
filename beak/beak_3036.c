#include <stdio.h>
#include<stdlib.h>

int greatest_common_factor(int a,int b){
	int r;
	if(a>b){
	}else{
		r=a;
		a=b;
		b=r;
	}
		while(1){
			int tmp=b;
			b=a%b;
			a=tmp;
			if(b==0){
				break;
			}
		
		}
		return a;
}


void abbreviation(int bunja, int bunmo){
	int a,b,k;
	k=greatest_common_factor(bunja,bunmo);
	a=bunja/k;
	b=bunmo/k;
	printf("%d/%d",a,b);
	}

int main(){
	int N;
	scanf("%d",&N);
	
	int* arr = malloc(sizeof(int)*N);
	
	for (int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int j=1;j<N;j++){
		abbreviation(arr[0],arr[j]);
		if(j!=N-1){
			printf("\n");
		}
	}
}
