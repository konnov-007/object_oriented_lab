#include <bits/stdc++.h>
#include <graphics.h>
#include "classes.cpp"
#define SCREENSIZE 300
#include <time.h>

using namespace std;


int main(){
	initwindow(SCREENSIZE, SCREENSIZE);
	srand(time(NULL));
	
	int count=200;
	Dot ** dots = new Dot *[count];

	for(int i=0; i<count; ++i){
		dots[i] = new Dot(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
	}
	
	while(1){
		if(kbhit()){
			break;
		}
		for(int i=0; i<count; ++i){
			dots[i]->move();
		}
		delay(10);
	}
	getch();
	closegraph();
	return 0;
}
