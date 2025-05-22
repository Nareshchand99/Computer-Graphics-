//#include<stdio.h>

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm;
int n,xs[100],ys[100],i,ty,tx;
void draw();
void translate();

void main()
{
//int gd=DETECT,gm;
//int n,xs[100],ys[100],i,ty,tx;

  cout<<"Enter number of sides of polygon: ";
  cin>>n;
  cout<<"Enter the co-rdinates:x,y for each vertex ";
  for(i=0; i<n; i++)
//  printf("Enter distances for translation (in x and y direction):");
  cin>>xs[i]>>ys[i];
  cout<<"Enter distances for translation (in x and y direction):";
  cin>>tx>>ty;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  //drawing original polygon in RED color
  setcolor(RED);
  draw();
  //doing translation
  translate();
  setcolor(YELLOW);
  draw();
  getch();
}

void draw()
{
  for(i=0; i<n; i++)
   line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
}

void translate()
{
  for(i=0; i<n; i++)
  {
   xs[i]=xs[i]+tx;
   ys[i]=ys[i]+ty;
  }
}

