#include<iostream.h>
#include<conio.h>
class Area
{
	int square,circle;
	public:
		Area(int x)
		{
			square=4*x;
			cout<<"area of square:"<<square<<endl;
		}
		Area(float pi,int r)
		{
			circle=pi*r*r;
			cout<<"area of circle:"<<circle;
		}

};

void main()
{
	clrscr();
	Area a1(5);
	Area a2(3.14,5);
	getch();
}
