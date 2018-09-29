#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int sgd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	int x,y,x1,y1,x2,y2,dx,dy,p;
	int const1,const2,const3,power1;
	double m;
	printf("\n Enter the Constant for X:: ");
	scanf("%d %d",&const1);
	printf("\n Enter the Constant for Y:: ");
	scanf("%d %d",&const2);
	printf("\n Enter the Constant for Result:: ");
	scanf("%d %d",&const3);
	printf("\n Enter the Power for X:: ");
	scanf("%d %d",&power1);
	x1=1;
	x2=2;
	y1=(const3-(const1*(x1^power1)))/const2;
	y2=(const3-(const1*(x2^power1)))/const2;
	dx=x2-x1;
	dy=y2-y1;

	m=(double)dy/dx;
	printf("%f",m);

	x=x1;
	y=y1;

	if(m<=1 && m>0.0)
	{
		p=(2*dy)-dx;
		//printf("\n hello i m there");
		getch();
		while(x<x2)
		{
			putpixel(x,y,1);
			if(p>=0)
			{   
				y=y+1;
				p=p+(2*dy)-(2*dx);    
			}
			else
			{
				y=y;
				p=p+(2*dy);
			}
			x++;
		}
	}

	if(m>1)
	{
		p=(2*dx)-dy;

		while(y<y2)
		{
			putpixel(x,y,2);
			if(p>=0)
			{
				x=x+1;
				p=p+(2*dx)-(2*dy);
			}
			else
			{
				x=x;
				p=p+(2*dx);
			}
			y++;
		}
	}

	getch();
	closegraph();
	return 0;

}
