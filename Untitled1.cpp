#include <iostream>

#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	circle(100,200,300);
	getch();
	closegraph();
	return 0;
	
}