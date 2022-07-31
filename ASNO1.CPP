#include<iostream.h>
#include<conio.h>
class Addition
{
	public:
		add(int a,int b=2,int c=3)
		{
			cout<<"addition:"<<a+b+c;
		}
};
void main()
{
	Addition A;
	clrscr();
	A.add(2);
	getch();
}