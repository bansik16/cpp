#include<iostream.h>
#include<conio.h>
class account
{
	int acc_no,bal;
	char name[20];
	public:
		void deposit();
		void withdraw();
		void display();
};
void account::deposit()
{
	for(i=0;i<n;i++)
	{
		cout<<"enter account no:";
		cin>>acc_no;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter balance:";
		cin>>bal;
	}
}