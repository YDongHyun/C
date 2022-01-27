#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time {  //구조체 선언
	int begin;
	int end;
};

bool cmp(Time f, Time s){
	if (f.end == s.end){   //비교해서 end값이 같으면
		return f.begin < s.begin; //시작이 빠른순으로
	}
	else{
		return f.end < s.end; // end값이 다르면 종료시간이 빠른 순으로 
	}
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

