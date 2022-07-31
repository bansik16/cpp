#include<iostream.h>
#include<conio.h>
int i,j;
class matrix
{
	int a[3][3],row,column;
	public:
		void get();
		void process();
		void put();
};

void matrix::get()
{
	cout<<"\nmatrix of a:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nmatrix of b:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
}

void matrix::process()
{
	for(i=0;i<3;i++)
	{
		int sum=0
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
}

void matrix::put()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<c[i][j];
		}
	}
}

void main()
{
	clrscr();
	matrix M;
	M.get();
	M.process();
	M.put();
	getch();
}
