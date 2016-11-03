#define SCREENSIZE 300
#include <graphics.h>


class Figure{
	protected:
		int x;
		int y;
		int size;
		int color;
		int dx;
		int dy;
		int speed;
		void shift(){
			x+=dx*speed;
			y+=dy*speed;
			if(x>SCREENSIZE){
				dx=-1;
			}
			if(x<0){
				dx=1;
			}
			if(y>SCREENSIZE){
				dy=-1;
			}
			if(y<0){
				dy=1;
			}
		}
	public:
		virtual void move()=0;	
		virtual void draw(int color)=0;	
		Figure(int x, int y, int color, int size, int speed):x(x),y(y),color(color),size(size),speed(speed){
			dx=1;
			dy=1;
		}
};

class Dot: public Figure{
	public:
		void draw(int color){
			setcolor(color);
			for(int i=1; i<=size; ++i)
				circle(x, y, i);
		}
		Dot(int x, int y, int color, int size,int speed):Figure(x,y,color,size,speed){
			draw(color);
		}
		
		void move(){
			draw(0);
			shift();
			draw(color);
		}
};



class Line: public Figure{
		public:
		void draw(int color){
			setcolor(color);
			moveto(x, y);
			lineto(x+20+(size*20), y+55+(size*20));
		}
		Line(int x, int y, int color, int size,int speed):Figure(x,y,color,size,speed){
			draw(color);
		}
		
		void move(){
			draw(0);
			shift();
			draw(color);
		}
};
