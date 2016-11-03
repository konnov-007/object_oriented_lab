#include <bits/stdc++.h>
#include <graphics.h>
#include "classes.cpp"
#define SCREENSIZE 300
#include <time.h>
using namespace std;

void callDot(int count){
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
}


void callLine(int count){
	Line ** lines = new Line *[count];

	for(int i=0; i<count; ++i){
		lines[i] = new Line(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
	}
	
	while(1){
		if(kbhit()){
			break;
		}
		for(int i=0; i<count; ++i){
			lines[i]->move();
		}
		delay(10);
	}
}









int main(){
	initwindow(SCREENSIZE, SCREENSIZE);
	srand(time(NULL));
	
	callDot(200); //calling a dot with 200 instances
	getch();
	getch();
	callLine(50); //calling a line with 50 instances
	getch();
	closegraph();
	return 0;
}
