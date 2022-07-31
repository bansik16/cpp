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
		friend void min(first,second,third);
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
		friend void min(first,second,third);
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
		friend void min(first,second,third);
};

void min(first x,second y,third z)
{
	if(x.a<y.b)
	{
		cout<<"A is min:"<<x.a;
	}
	else if(y.b<z.c)
	{
		cout<<"B is min:"<<y.b;
	}
	else
		cout<<"C is min:"<<z.c;
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
	min(A,B,C);
	getch();
}