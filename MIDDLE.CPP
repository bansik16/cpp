#include<iostream.h>
#include<conio.h>
class second;
class third;
class first
{
	int a;
	public:
		void get()
		{
			cout<<"enter value of a:";
			cin>>a;
		}
		friend void middle(first,second,third);
};
class second
{
	int b;
	public:
		void get()
		{
			cout<<"enter value of b:";
			cin>>b;
		}
		friend void middle(first,second,third);
};
class third
{
	int c;
	public:
		void get()
		{
			cout<<"enter value of c:";
			cin>>c;
		}
		friend void middle(first,second,third);
};
void middle(first x,second y,third z)
{
	if(x.a>y.b&&x.a<z.c)
		cout<<"a is middle"<<x.a;
	else if(y.b>x.a&&y.b<z.c)
		cout<<"b is middle"<<y.b;
	else
		cout<<"c is midlle"<<z.c;
}
void main()
{
	clrscr();
	first A;
	A.get();
	second B;
	B.get();
	third C;
	C.get();
	middle(A,B,C);
	getch();
}