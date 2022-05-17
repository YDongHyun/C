#include<stdio.h>
#include<Windows.h>
#include<conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void gotoxy(int x, int y);
int rotate=0;
int weight=0;

int block_move(){
	char c;
        if (_kbhit()) {               
            c = _getch();         
            if (c == -32) {          
                c = _getch();       
                switch (c) {           
                case LEFT:
                	weight-=1;
                    break;
                case RIGHT:
                	weight+=1;
                    break;
                case UP:
                	if(rotate==0){
                		rotate=1;
					}
					else{
						rotate=0;
					}
                    break;
                case DOWN:
             
                    break;
                }
            }
    }
    return 0;
}

void gameboard(){
	for(int i =3;i<28;i++){
		gotoxy(3,i);printf("▩");
		gotoxy(13,i);printf("▩");
	gotoxy(3,28);printf("▩▩▩▩▩▩▩▩▩▩▩");
	}
}

void block_set(){
	int bar_block[2][4][4]={{{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}},
							{{0,0,0,0},{0,0,0,0},{0,0,0,0},{1,1,1,1}}};
	int k=0;
	while(1){
		block_move();
		for(int i=0;i<4;i++){
    	gotoxy(7+weight,3+i+k);
		for(int j=0;j<4;j++){
			if (bar_block[rotate][i][j]==1){
				printf("■");
				}
			else{
				printf("  ");
				}			
			}
		}
		Sleep(500);
		for(int i=0;i<4;i++){
   		gotoxy(7+weight,3+i+k);
			for(int j=0;j<4;j++){
					printf("  ");
					}			
			}
		k++;
		}
	}

void block(int x,int y){
	gotoxy(x,y);printf("■");
}

void remove(int x, int y){
	gotoxy(x,y);printf("  ");
}

int main(){

	printf("%d",rotate);
	gameboard();
	
	block_set();
	block(7,3);
}

void gotoxy(int x, i
