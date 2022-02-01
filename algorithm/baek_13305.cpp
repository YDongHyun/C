#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,i,fi,k;
	long long sum=0;
	
	cin >>n;
	vector<int> money(n-1);;
	vector<long long> distance(n);
	
	
	for(i=0;i<n-1;i++){
		cin >> distance[i];
	}
	
	for(i=0;i<n;i++){
		cin >> money[i];
	}
	
	for(i=0; i<n;i++){
		fi=money[i];
		k=i+1;
		if(distance[i]!=0){
			while(fi<money[k]){
				distance[i]+=distance[k];
				distance[k]=0;
				k++;
				}
			}
		}
	
	for(i=0;i<n;i++){
		distance[i]=distance[i]*money[i];
	}
	for(i=0;i<n-1;i++){
		sum+=distance[i];
}
	cout << sum;
}
