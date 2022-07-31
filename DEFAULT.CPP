#include<iostream.h>
#include<conio.h>
class addition
{
	public:
		void add(int a,int b,int c=5,int d=5)
		{
			cout<<"addition:"<<a+b+c+d;
		}
};

void main()
{
	clrscr();
	addition A;
	A.add(5,5);
	getch();
}
