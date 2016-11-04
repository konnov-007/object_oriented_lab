#include <bits/stdc++.h>
#include <graphics.h>
#include "classes.cpp"
#define SCREENSIZE 600
#include <time.h>
using namespace std;




void moveFigure(int count){
		Dot ** dots = new Dot *[count];
		Line ** lines = new Line *[count];
		Circle ** circles = new Circle *[count];
		Triangle ** triangles = new Triangle *[count];
		Rectangle1 ** rectangles = new Rectangle1 *[count];
		Rhombus ** rhombuses = new Rhombus *[count];
		Ellipse1 ** ellipses = new Ellipse1 *[count]; 
		
	for(int i=0; i<count; ++i){
		dots[i] = new Dot(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		lines[i] = new Line(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		circles[i] = new Circle(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		triangles[i] = new Triangle(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		rectangles[i] = new Rectangle1(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		rhombuses[i] = new Rhombus(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
		ellipses[i] = new Ellipse1(rand()%SCREENSIZE, rand()%SCREENSIZE, rand()%15, rand()%3+1, rand()%3+1);
	}
	
	while(1){
		if(kbhit()){
			break;
		}
		for(int i=0; i<count; ++i){
			lines[i]->move();
			dots[i]->move();
			circles[i]->move();
			triangles[i]->move();
			rectangles[i]->move();
			rhombuses[i]->move();
			ellipses[i]->move();
		}
		delay(10);
	}
}






int main(){
	initwindow(SCREENSIZE, SCREENSIZE);
	srand(time(NULL));
	int numberOfEachFigure = 10;
	moveFigure(numberOfEachFigure);
	getch();
	closegraph();
	return 0;
}
