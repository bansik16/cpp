#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

class employee
{
	int emp_id;
	float bsalary,da,hra,net_salary;
	char emp_name[10];
	public:
		void getdata();
		void calculate();
		void display();
};
void employee::getdata()
{
	cout<<"enter employee no:";cin>>emp_id;
	cout<<"enter employee name:";cin>>name;
	cout<<"enter basic salary:";cin>>bsalary;
}
void employee::calculate()
{
	da=bsalary*10/100;
	hra=bsalary*12/100;
	net_salary=bsalary+da+hra;
}
void employee::display()
{
	cout<<"employee id:"<<emp_id<<endl;
	cout<<"employee name:"<<emp_name<<endl;
	cout<<"basic salary:"<<bsalary<<endl;
	cout<<"da:"<<da<<endl;
	cout<<"hra:"<<hra<<endl;
}
void main()
{
	clrscr();
	employee e;
	e.getdata();
	e.calculate();
	e.display();
	getch();
}
