#include <winbgim.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
#define round(a)((int)(a+0.5))
int p_c[150][2];
int i=0;
void draw_rec(int x1,int x2,int y1,int y2){

    line(x1,y1,x1,y2);
    line(x1,y1,x2,y1);

    line(x2,y1,x2,y2);
    line(x1,y2,x2,y2);

}
void ppxl(int x,int y,int x1,int y1,int col){
    int p_c[150][2];
    int i=0;
    putpixel(x+x1,y+y1,col);
    p_c[i][0] = x+x1;
    p_c[i][1] = y+y1;
    i++;
     std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(x+x1,-y+y1,col);
    p_c[i][0] = x+x1;
    p_c[i][1] = -y+y1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(-x+x1,y+y1,col);
    p_c[i][0] = -x+x1;
    p_c[i][1] = y+y1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(-x+x1,-y+y1,col);
    p_c[i][0] = -x+x1;
    p_c[i][1] = -y+y1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(y+y1,x+x1,col);
    p_c[i][0] = y+y1;
    p_c[i][1] = x+x1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(-y+y1,x+x1,col);
    p_c[i][0] = -y+y1;
    p_c[i][1] = x+x1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(y+y1,-x+x1,col);
    p_c[i][0] = y+y1;
    p_c[i][1] = -x+x1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    putpixel(-y+y1,-x+x1,col);
    p_c[i][0] = -y+y1;
    p_c[i][1] = -y+y1;
    i++;
    std::cout<<p_c[i][0]<<"\t"<<p_c[i][1]<<"\n";

    }
void draw_circle(int x1,int y1,int r){

    int x=0;
    int y=r;
    int p;
    int counts=1;
    int i=0;
    p = 1 - r;
    ppxl(x,y,x1,y1,5);
    while(x<=y){

            if(p<=0){
                p   = p + 2*x + 2 + 1;
                x   = x+1;
                ppxl(x,y,x1,y1,5);


            }
            else{
                p = p + 2*x + 2 - 2*y - 2 + 1;
                x= x+1;
                y= y-1;
                ppxl(x,y,x1,y1,5);
            }


            counts++;
            i++;

    }

     std::cout<<counts;
}
main(int argc, char *argv[])
{
    int x1,x2,y1,y2,r;
	initwindow(300, 300);
	x1=100;
	x2=150;
	y1=100;
	y2=150;
	r=50;					// init window graphics
    draw_rec(x1,x2,y1,y2);
    draw_circle(x1+100,y1+100,r);
	while(!kbhit()) delay(1);				// pause screen

}
