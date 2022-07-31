#include<iostream.h>
#include<conio.h>
class middle
{
	public:
		mid(int a,int b=2,int c=3)
		{
			if(a<b&&a>c||b>a&&b<c)
			{
				cout<<"middle value is a:"<<a;
			}
			else if(b<a&&b>c||b>a&&b<c)
			{
				cout<<"middle value is b:"<<b;
			}
			else
			{
				cout<<"middle value is c:"<<c;
			}
		}

};
void main()
{
	middle m;
	clrscr();
	m.mid(5);
	getch();
}