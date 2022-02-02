#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std; 

void D(int v){  //트리 구조 
	if(v>7) return;
	else{
		//printf("%d ",v); //전위순회 
		D(v*2);
		//printf("%d ",v); //중위순회 
		D(v*2+1);
		//printf("%d ",v); //후위순회
	}
}

int main(){
	D(1);
	return 0;
}
