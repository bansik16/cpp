#include<iostream.h>
#include<conio.h>

class student
{
	int st_no;
	char name[20],address[20],course[20];
	long int phone;
	public:
		student()
		{
			st_no=1;
		}
		student(char *n,char *a)
		{
			strcpy(name,n);
			strcpy(address,a);
		}
		student(long int p,char *c)
		{
			strcpy(course,c);
			phone=p;
		}
		void display()
		{
		}
};
void main()
{
	clrscr();
	student s;
	getch();
}