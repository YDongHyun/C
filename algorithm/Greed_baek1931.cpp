#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time {
	int begin;
	int end;
};

bool cmp(Time f, Time s){
	if (f.end == s.end){
		return f.begin < s.begin;
	}
	else
		return f.end < s.end;
}

int main(){
	int n,i, cnt=0,b=0;
	scanf("%d",&n);
	vector<Time> a(n);
	
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i].begin,&a[i].end);
	}
	sort(a.begin(),a.end(),cmp);
	
	for(i=0;i<a.size();i++){
		if(b<=a[i].begin){
			b=a[i].end;
			cnt++;
		}
	}
	printf("%d\n",cnt);
}

