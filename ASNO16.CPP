#include<iostream.h>
#include<conio.h>
class interest
{
	public:
		calc(int r,int p=120,int n=15)
		{
			cout<<"simple interest:"<<(p*r*n)/100;
		}
};
void main()
{
	interest i;
	clrscr();
	i.calc(10);
	getch();
}