#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

void main()
	{

		int d;
		int m;
		int y;
		int x;

   		int j=0;
		int i=0;

		clrscr();


   char a[50];
   printf("Enter Your Text to be Displayed : ");		// User inputs
    while( (a[j]=getchar()) != '\n' && j < 50)
    {
	j=j+1;
    }
     a[j] = '\0';

	d=DETECT; 						// for autodetection
	initgraph(&d,&m,"C:\\TURBOC3\\BGI");

      //	setcolor(GREEN);
      //	outtextxy(400,350,"Created By :: Sujan Shrestha");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	while(!kbhit())
	{
	for(i=100;i<110;i++)
	{
	outtextxy(50,i,a);
	setcolor(i);
	}				//delay(50); // pause the program

	}
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	for(x=10; x<550; x++)
		{
	cleardevice();
	setcolor(x);
	outtextxy(x,100,a);
	delay(9);
	}

	for(x=550; x>5; x--)
		{
	cleardevice();
	setcolor(x);
	outtextxy(x,100,a);
	delay(7);
	}

	for(x=140,y = 10; y<400; y++)
	{
	cleardevice();
	setcolor(x);
	outtextxy(x,y,a);
	delay(5);
	}

	for(x=140, y = 400; y>10; y--)
	{
	cleardevice();
	setcolor(y);
	outtextxy(x,y,a);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	delay(11);
	}

	for(x=5; x<360;x++)
	{
	cleardevice();
	setcolor(x);
	outtextxy(x,400,"Created By :: 071/BCT/63");
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	delay(22);
	}

	getch();
	closegraph();

	}
