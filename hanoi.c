#include <stdio.h>  

void hanoi(int n, int from, int temp, int to)  //하노이탑 함수 생성 n, from, temp, to를 int형으로 받는다.
{
	if (n == 1)    // n이 1일때
		printf("Move a disk from %d to %d\n", from, to);   
	else
	{
		hanoi(n - 1, from, to, temp); //하노이탑 함수 재귀호출한다. 
		printf("Move a disk from %d to %d\n", from, to);
		hanoi(n - 1, temp, from, to); //하노이탑 함수 재귀호출
	}
}
main()
{
	int N;
	printf("Input the number of disks: ");
	scanf("%d", &N);	//숫자를 입력받는다
	if (N >= 1)
	hanoi(N, 1, 2, 3); //하노이 함수 실행
	getchar();
}
