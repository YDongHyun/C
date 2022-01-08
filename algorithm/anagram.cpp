#include <stdio.h>
#include <algorithm>  //exit함수 라이브러리 
//해싱 기법 사용. 알파벳의 아스키넘버를 인덱스 번호를 1대1 대응
//A~Z = 65~90 / a~z = 97~122
int a[60],b[60];

int main(){
	int i;
	char str[101];
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]>=65&&str[i]<=90){
			a[str[i]-64]++;
		}else if(str[i]>=97&&str[i]<=122){
			a[str[i]-70]++;
		}
	}
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]>=65&&str[i]<=90){
			b[str[i]-64]++;
		}else if(str[i]>=97&&str[i]<=122){
			b[str[i]-70]++;
		}
	}
	for(i=1;i<=52;i++){
		if(a[i]!=b[i]){
			printf("No\n");
			exit(0); //프로그램 종료 
 		}
} 
printf("YES\n");
		return 0;
}
