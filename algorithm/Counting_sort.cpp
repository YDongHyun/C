#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int n,i;
	scanf("%d",&n);
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		b[a[i]]++;
	}
	
	for(i=0;i<n-1;i++){
		b[i+1]=b[i]+b[i+1];
	}
	
	for(i=0;i<n;i++){
		c[b[a[i]]-1]=a[i];
		b[a[i]]--;
		}
	
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
return 0;
}
